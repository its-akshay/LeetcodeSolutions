class Solution {
public:
    int sol(int i,int j,string&s1,string&s2,vector<vector<int>>& dp){
        if(i<0||j<0){
            return 0;
        }
        if(dp[i][j]!=-1){return dp[i][j];}
        if(s1[i]==s2[j]){
            return dp[i][j] = 1+sol(i-1,j-1,s1,s2,dp);
        }
        return dp[i][j] = max(sol(i-1,j,s1,s2,dp),sol(i,j-1,s1,s2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size();
        int n2 = text2.size();
        vector<vector<int>> dp(n1,vector<int>(n2,-1));
        int x = sol(n1-1,n2-1,text1,text2,dp);
        return x;
    }
};