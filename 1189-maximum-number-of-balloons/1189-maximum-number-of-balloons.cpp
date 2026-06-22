class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>freq;
        
        for(auto x:text) freq[x]++;
        // int ans=INT_MAX;
        // for(auto x:freq){
        //     int f=x.second;
        //     char c=x.first;
        //     if(c=='b') ans=min(f,ans);
        //     if(c=='a') ans=min(f,ans);
        //     if(c=='l') ans=min(f/2,ans);
        //     if(c=='o') ans=min(f/2,ans);
        //     if(c=='n') ans=min(f,ans);
        // }

        return min({
            freq['b'],
            freq['a'],
            freq['l']/2,
            freq['o']/2,
            freq['n']
        });
    }
};