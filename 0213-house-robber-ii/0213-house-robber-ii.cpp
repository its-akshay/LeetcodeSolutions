class Solution {
public:
    int sol(vector<int>&nums){
        int prev = nums[0];
        int prev2 = 0;
        for(int i=1;i<nums.size();i++){
            int pick = nums[i];
            if(i>1){
                pick+=prev2;
            }
            int notPick = 0 + prev;
            int curr = max(pick,notPick);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        vector<int>temp1;
        vector<int>temp2;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            if(i!=0){
                temp1.push_back(nums[i]);
            }
            if(i!=nums.size()-1){
                temp2.push_back(nums[i]);
            }
        }
        return max(sol(temp1),sol(temp2));
    }
};