class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int left = 0;
        int right = n-1;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[left])>nums[right]){
                ans[i] = nums[left]*nums[left];
                left++;
            }
            else{
                ans[i] = nums[right]*nums[right];
                right--;
            }
        }
        reverse(ans.begin
               (),ans.end());
        return ans;
    }
};