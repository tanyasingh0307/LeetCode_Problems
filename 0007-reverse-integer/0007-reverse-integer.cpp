class Solution {
public:
    int reverse(int x) {
        if(x>INT_MAX || x<INT_MIN) return 0;
        long long q=0;
        while(x!=0){
        int rem=x%10;
         q=q*10+rem;
         x=x/10;
        }
         if(q>INT_MAX || q<INT_MIN) return 0;
        
        return (int)q;
    }
};