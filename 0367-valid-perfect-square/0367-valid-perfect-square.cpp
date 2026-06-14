class Solution {
public:
    bool isPerfectSquare(int num) {
        long long n=sqrt(num);
        return n*n==num; 
    }
};