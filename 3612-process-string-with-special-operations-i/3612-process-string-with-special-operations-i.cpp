class Solution {
public:
    string processStr(string s) {

        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='#') ans+=ans;
            else if(s[i]=='%' && !ans.empty()) reverse(ans.begin(),ans.end());
            else if(s[i]=='*' && !ans.empty()) ans.pop_back();
            else if(s[i]>='a' && s[i]<='z') ans.push_back(s[i]);
        }
        return ans;
    }
};