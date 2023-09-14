class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
         vector<int> prev(m+1,0), cur(m+1,0);
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        // for(int i=0;i<=n;i++){
        //     dp[i][0] = 0;
        // }
        // for(int i=0;i<=m;i++){
        //     dp[0][i] = 0;
        // }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    cur[j] = 1+prev[j-1];
                }
                else{
                    cur[j] = max(prev[j],cur[j-1]);
                }
            }
            prev = cur;
        }
        return cur[m];
    }
};