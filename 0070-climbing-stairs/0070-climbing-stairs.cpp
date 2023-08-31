class Solution {
public:
    int sol(int n,vector<int>&dp){
        if(n==0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int one = sol(n-1,dp);
        int two = sol(n-2,dp);
        dp[n] = one+two;
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return sol(n,dp);
    }
};