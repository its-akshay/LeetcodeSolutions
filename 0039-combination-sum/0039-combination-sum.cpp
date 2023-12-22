class Solution {
public:
    void solve(int ind,int curr,vector<vector<int>>&ans,vector<int>&res,vector<int>& arr, int target){
        if(ind==arr.size()){
            if(curr==target){
                ans.push_back(res);
            }
            return;
        }
        if(curr+arr[ind]<=target){
            res.push_back(arr[ind]);
            curr+=arr[ind];
            solve(ind,curr,ans,res,arr,target);
            curr-=arr[ind];
            res.pop_back();
        }
        solve(ind+1,curr,ans,res,arr,target);    
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>res;
        int curr = 0;
         solve(0,curr,ans,res,candidates,target);
         return ans;
    }
};