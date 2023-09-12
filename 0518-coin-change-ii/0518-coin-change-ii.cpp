class Solution {
public:
        int sol(int ind,vector<int>&coins,int t,vector<vector<int>>&dp){
        if(ind == 0){
        return (t%coins[0]==0);
    }
        if(dp[ind][t]!=-1){
            return dp[ind][t];
        }
        int notTake =  sol(ind-1,coins,t,dp);
        int take = 0;
        if(coins[ind]<=t){
            take = sol(ind,coins,t-coins[ind],dp);
        }
        return dp[ind][t]  = (take+notTake);
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));

        int x = sol(n-1,coins,amount,dp);

        return x;
    }
};