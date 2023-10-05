class Solution {
public:
    int sol(int ind,int buy,vector<int>&prices,int n,vector<vector<int>>&dp,int fee){
        if(ind==n){
            return 0;
        }
        if(dp[ind][buy]!=-1){
            return dp[ind][buy];
        }
        int profit;
        if(buy==0){//condition for buying
            profit = max(sol(ind+1,0,prices,n,dp,fee),-prices[ind]+sol(ind+1,1,prices,n,dp,fee));
        }
        if(buy==1){//condition for selling
            profit = max(sol(ind+1,1,prices,n,dp,fee),prices[ind]-fee+sol(ind+1,0,prices,n,dp,fee));
        }
        return dp[ind][buy] = profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        int x = sol(0,0,prices,n,dp,fee);
        return x;
    }
};