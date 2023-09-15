class Solution {
public:
    int longestPalindromeSubseq(string &s) {
        string s1 = s;
        reverse(s.begin(),s.end());
        string s2 = s;
        int n = s.size();
        int m = s.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<=m;i++){
            dp[0][i] = 0;
        }
        for(int i=0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 0+max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];

    }
    int minInsertions(string s) {
        int x = longestPalindromeSubseq(s);
        return s.size()-x;
    }
};