class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto freq:nums){
            mp[freq]++;
        }
        int ans=0;
        int res;
        for(auto x:mp){
            int temp=x.second;
            if(ans<temp){
                ans=temp;
                res=x.first;
            }
        }
        return res;
    }
};