class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int maxct=0;
        int maxindx=-1;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]) count++;
        }
            if(count>nums.size()/2) return nums[i];
            
        }
        return -1;
        
    }
};