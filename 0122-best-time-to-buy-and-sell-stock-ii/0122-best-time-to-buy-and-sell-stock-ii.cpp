class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(2, 0));
        dp[n][0]=dp[n][1]=0;
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                long profit = 0;
                if(buy==0){
                    profit = max (dp[ind+1][0],-nums[ind] +dp[ind+1][1]);
                }
                if(buy==1){
                    profit = max (dp[ind+1][1],nums[ind]+dp[ind+1][0]);
                }
                 dp[ind][buy] = profit;
                    }
                }
        
        return dp[0][0];
    }
};