#include <mutex>
#include <condition_variable>
using namespace std;

class ZeroEvenOdd {
private:
    int n;
    int state = 0; // 0: zero, 1: odd, 2: even
    mutex m;
    condition_variable cv;

public:
    ZeroEvenOdd(int n) {
        this->n = n;
    }

    void zero(function<void(int)> printNumber) {
        for (int i = 1; i <= n; i++) {
            unique_lock<mutex> lock(m);

            cv.wait(lock, [&]() { return state == 0; });

            printNumber(0);

            if (i % 2 == 1)
                state = 1; // odd
            else
                state = 2; // even

            cv.notify_all();
        }
    }

    void odd(function<void(int)> printNumber) {
        for (int i = 1; i <= n; i += 2) {
            unique_lock<mutex> lock(m);

            cv.wait(lock, [&]() { return state == 1; });

            printNumber(i);

            state = 0;
            cv.notify_all();
        }
    }

    void even(function<void(int)> printNumber) {
        for (int i = 2; i <= n; i += 2) {
            unique_lock<mutex> lock(m);

            cv.wait(lock, [&]() { return state == 2; });

            printNumber(i);

            state = 0;
            cv.notify_all();
        }
    }
};