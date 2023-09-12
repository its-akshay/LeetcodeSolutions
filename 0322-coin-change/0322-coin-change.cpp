class Solution {
public:
    int sol(int ind,vector<int>&coins,int t,vector<vector<int>>&dp){
        if(ind==0){
            if(t%coins[0]==0){
                return t/coins[0];
            }
            return 1e9;
        }
        if(dp[ind][t]!=-1){
            return dp[ind][t];
        }
        int notTake = 0 + sol(ind-1,coins,t,dp);
        int take = 1e9;
        if(coins[ind]<=t){
            take = 1+sol(ind,coins,t-coins[ind],dp);
        }
        return dp[ind][t]  = min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
            int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));

        int x = sol(n-1,coins,amount,dp);
        if(x>=1e9){
            return -1;
        }
        return x;
    }
};