class Solution {
public:
    int sol(int ind,int prev,vector<int>&nums,int n,vector<vector<int>>&dp){
        if(ind==n){
            return 0;
        }
        if(dp[ind][prev+1]!=-1){
            return dp[ind][prev+1];
        }
        int Not = 0 + sol(ind+1,prev,nums,n,dp);
        int take = 0;
        if(prev==-1||nums[ind]>nums[prev]){
            take = 1+sol(ind+1,ind,nums,n,dp);
        }
        return dp[ind][prev+1] = max(Not,take);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        int x = sol(0,-1,nums,n,dp);
        return x;
    }
};