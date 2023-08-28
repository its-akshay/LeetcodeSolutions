class Solution {
public:
    int sol(int ind,vector<int>&nums,vector<int>&dp){
        if(ind==0){return nums[0];}
        if(ind<0){return 0;}
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int pick = nums[ind]+sol(ind-2,nums,dp);
        int notpick = 0+sol(ind-1,nums,dp);
        dp[ind] = max(pick,notpick);
        return dp[ind];
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return sol(n-1,nums,dp);
    }
};