// class Solution {
// public:
//     void uniqueSubset(vector<int> &nums,vector<int> &ans,vector<vector<int>> &st,int index){
//         st.push_back(ans);
//         for(int i=index;i<nums.size();i++){
//             if((i>index) && (nums[i]==nums[i-1])){
//                 continue;}
//             ans.push_back(nums[i]);
//             uniqueSubset(nums,ans,st,i+1);
//             ans.pop_back();
//         }
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         vector<vector<int>> st;
//         vector<int> ans;
//         sort(nums.begin(),nums.end());
//         uniqueSubset(nums,ans,st,0);
//         return st;
//     }
// };

class Solution {
public:
void subset(vector<vector<int>> &ans,vector<int> &curr,vector<int>& nums,int j)
{
   ans.push_back(curr);
   for(int i=j;i<nums.size();i++)
   {
       if(i>j&&nums[i]==nums[i-1]){
           continue;
       }
       curr.push_back(nums[i]);
       subset(ans,curr,nums,i+1);
       curr.pop_back();
   }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        int j=0;
        sort(nums.begin(),nums.end());
        subset(ans,curr,nums,j);
        return ans;
    }
};