class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        unordered_set<int>s;
        
        for(int i=0;i<n;i++){
            for(int k=1;k<=n;k++) s.insert(k);
            for(int j=0;j<n;j++){
                s.erase(matrix[i][j]);
            }
            if(s.size()!=0) {
                return false;
            }
        }
          for(int j=0;j<n;j++){
            for(int k=1;k<=n;k++) s.insert(k);
            for(int i=0;i<n;i++){
                s.erase(matrix[i][j]);
            }
            if(s.size()!=0) {
                return false;
            }
        }
        return true;
    }
};