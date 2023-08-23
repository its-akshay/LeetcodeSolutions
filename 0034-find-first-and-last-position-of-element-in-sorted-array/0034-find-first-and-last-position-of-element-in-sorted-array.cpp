class Solution {
public:
    int first(vector<int>& nums, int x){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int f = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==x){
                f = mid;
                high = mid-1;
            }
            else if(nums[mid]<x){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return f;
    }
    int last(vector<int>& nums, int x){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int l = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==x){
                l = mid;
                low = mid+1;
            }
            else if(nums[mid]<x){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = first(nums,target);
        int b = last(nums,target);
        return {a,b};
    }
};