//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
   
    void uniqueSubset(vector<int> &nums,vector<int> &ans,vector<vector<int>> &st,int index){
        st.push_back(ans);
        for(int i=index;i<nums.size();i++){
            if((i>index) && (nums[i]==nums[i-1])){
                continue;}
            ans.push_back(nums[i]);
            uniqueSubset(nums,ans,st,i+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        vector<vector<int>> st;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        uniqueSubset(nums,ans,st,0);
        return st;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends