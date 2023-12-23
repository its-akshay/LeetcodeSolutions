//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve(int ind,int N,vector<int>arr,vector<int>&ans,int sum){
        if(ind==N){
            ans.push_back(sum);
            return;
        }
        solve(ind+1,N,arr,ans,sum+arr[ind]);
        solve(ind+1,N,arr,ans,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        solve(0,N,arr,ans,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends