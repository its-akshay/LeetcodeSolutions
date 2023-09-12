class Solution {
public:
    int sol(int ind,vector<int>&nums,int target){
        if(ind == 0){
        if(target==0 && nums[0]==0)
            return 2;
        if(target==0 || target == nums[0])
            return 1;
        return 0;
    }
        int notTake = sol(ind-1,nums,target);
        int take = 0;
        if(nums[ind]<=target){
            take = sol(ind-1,nums,target-nums[ind]);
        }
        return notTake+take;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();

        int totSum = 0;
        for(int i=0; i<nums.size();i++){
            totSum += nums[i];
        }
        if(totSum-target<0) return 0;
        if((totSum-target)%2==1) return 0;
        int s2 = (totSum-target)/2;
        int x = sol(n-1,nums,s2);
        return x;
    }
};