class Solution {
    int wavy(long long n){
        string s=to_string(n);
        int cnt=0;
        for(int i=1;i<s.size()-1;i++){
            if((s[i]>s[i-1] && s[i]>s[i+1]) || (s[i]<s[i-1] && s[i]<s[i+1])) cnt++;
        }
        return cnt;
    }
public:
    int totalWaviness(int num1, int num2) {  
        long long total=0;
        for(long long n=num1;n<=num2;n++){ 
            total+=wavy(n); 
        }
        return total;
    }
};