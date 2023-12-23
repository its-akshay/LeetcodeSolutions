class Solution {
public:
    void totalways(int ind,int target,vector<int>&ans,vector<vector<int>>&res,vector<int>arr){
            if(target==0){
                res.push_back(ans);
                return;
            }
            
        for(int i=ind;i<arr.size();i++){
            if(i>ind&&arr[i]==arr[i-1]){
                continue;
                //skip that occurence since it was repeated
            }
            if(arr[i]>target){
                break;
            }
            ans.push_back(arr[i]);
            totalways(i+1,target-arr[i],ans,res,arr);
            ans.pop_back();
        }    
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ans;
        vector<vector<int>>res;
        totalways(0,target,ans,res,candidates);
        return res;
    }
};