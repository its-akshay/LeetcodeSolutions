class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>prev(n,0);
        vector<int>next(n,0);
        for(int i=0;i<m;i++){
            prev[i] = matrix[0][i];
        }
        int maxi = INT_MAX;
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int up = matrix[i][j]+prev[j];
                int left = matrix[i][j];
                if(j-1>=0){
                    left+=prev[j-1];
                }
                else{
                    left+=1e9;
                }
                
                 int right = matrix[i][j];
                if(j+1<m){
                    right+=prev[j+1];
                }
                else{
                    right+=1e9;
                }
                next[j] = min(up,min(left,right));
            }
            prev = next;
        }
        for(int j=0;j<m;j++){
            maxi = min(maxi,prev[j]);
        }
        return maxi;
    }
};