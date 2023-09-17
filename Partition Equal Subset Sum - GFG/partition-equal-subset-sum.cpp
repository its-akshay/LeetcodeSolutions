//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int sol(int ind,int target,vector<vector<int>>&dp,int arr[]){
        if(target==0){
            return 1;
        }
        if(ind==0){
            if(arr[0]==target){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(dp[ind][target]!=-1){
            return dp[ind][target];
        }
        int notTake =  0+sol(ind-1,target,dp,arr);
        int take = 0;
        if(target>=arr[ind]){
            take = sol(ind-1,target-arr[ind],dp,arr);
        }
        dp[ind][target] = take||notTake;
    }
    int equalPartition(int N, int arr[])
    {
        
        int sum = 0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2==1){
            return 0;
        }
        else{
            int k = sum/2;
            vector<vector<int>>dp(N,vector<int>(k+1,-1));
            return sol(N-1,k,dp,arr);
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends