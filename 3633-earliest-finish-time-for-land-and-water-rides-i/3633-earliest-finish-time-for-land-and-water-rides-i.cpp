class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
     int ans = INT_MAX;
        int n=landStartTime.size();
        int m=waterStartTime.size();
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int lend=landStartTime[i]+landDuration[i];
            int fin1=max(lend,waterStartTime[j])+waterDuration[j];
            ans=min(ans,fin1);
              int wend = waterStartTime[j] + waterDuration[j];
                int fin2 =max(wend, landStartTime[i])+landDuration[i];
                ans = min(ans, fin2);
            }
         }
        return ans;
    

    }
};