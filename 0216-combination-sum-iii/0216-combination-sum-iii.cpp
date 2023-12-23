class Solution {
public:
    void solve(int ind,int k,int target,vector<vector<int>>&ans,vector<int>&res){
        if(k<=0){
            if(target==0){
            ans.push_back(res);
                
            }
            return;
            
        }
        for(int i=ind;i<=9;i++){
            res.push_back(i);
            solve(i+1,k-1,target-i,ans,res);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int target = n;
        vector<vector<int>>ans;
        vector<int>res;
        solve(1,k,target,ans,res);
        return ans;
    }
};