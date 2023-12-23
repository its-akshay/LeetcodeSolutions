//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
     void solve(int ind,vector<int>arr,vector<int>&ans,vector<vector<int>>&res){

        res.push_back(ans);
       
        for(int i = ind;i<arr.size();i++){
             if(i>ind &&arr[i]==arr[i-1]){
            continue;
            }
            ans.push_back(arr[i]);
            solve(i+1,arr,ans,res);
            ans.pop_back();
        }
        
    }

    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
       vector<int>ans;
       vector<vector<int>>res;
       sort(arr.begin(), arr.end());
        solve(0,arr,ans,res);
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends