class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        if(n==1){
            return nums[0];
        }
        int ExcludingLast = maxAm(0,n-2,nums,dp);
        fill(dp.begin(),dp.end(),-1);
        int Excludingfirst = maxAm(1,n-1,nums,dp);
        
        return max(Excludingfirst,ExcludingLast);
    }
    int maxAm(int curr,int target,vector<int>&nums,vector<int>&dp){
        if(curr==target){
            return nums[curr];
        }
        if(curr>target){
            return 0;
        }
        if(dp[curr]!=-1){
            return dp[curr];
        }
        int rob = nums[curr] + maxAm(curr+2,target,nums,dp);
        int nrob = maxAm(curr+1,target,nums,dp);
        return dp[curr] = max(rob ,nrob);

    }
};