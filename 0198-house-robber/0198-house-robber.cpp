class Solution {
public:
    int sol(int ind,vector<int>&nums,vector<int>&dp){
        if(ind==0){
            return nums[ind];
        }
        if(ind<0){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int pick = nums[ind]+sol(ind-2,nums,dp);
        int nt = 0 +sol(ind-1,nums,dp);
        return dp[ind] = max(pick,nt);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        int x = sol(n-1,nums,dp);
        return x;
    }
};