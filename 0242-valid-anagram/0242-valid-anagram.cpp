class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t) return true;
        // else return false;
        if(s.length()!=t.length()) return false;
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        int count=0;
        for(int x:freq ){
            if(x>0) return false;
        }
        return true;
         
    }
};