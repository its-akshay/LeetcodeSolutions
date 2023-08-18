class Solution {
public:
void subset(vector<vector<int>> &ans,vector<int> &curr,vector<int>& nums,int j)
{
   ans.push_back(curr);
   for(int i=j;i<nums.size();i++)
   {
       // if(i<j&&nums[i]==nums[i-1]){
       //     break;
       // }
       curr.push_back(nums[i]);
       subset(ans,curr,nums,i+1);
       curr.pop_back();
   }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        int j=0;
        subset(ans,curr,nums,j);
        return ans;
    }
};