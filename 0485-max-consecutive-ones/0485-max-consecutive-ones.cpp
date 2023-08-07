class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int till = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                till++;
            }
            else{
                till = 0;
            }
            maxi = max(till,maxi);
        }
        return maxi;
    }
};