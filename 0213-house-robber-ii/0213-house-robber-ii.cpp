class Solution {
public:
     int robHelper(vector<int>& nums, int start, int end) {
        int prev = 0;
        int prev2 = 0;
        
        for (int i = start; i <= end; i++) {
            int pick = nums[i] + prev2;
            int notPick = prev;
            int curr = max(pick, notPick);
            prev2 = prev;
            prev = curr;
        }
        
        return prev;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 1) {
            return nums[0];
        }
        
        return max(robHelper(nums, 0, n - 2), robHelper(nums, 1, n - 1));
    }
};