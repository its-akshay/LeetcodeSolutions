//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int sol(int ind,int arr[],vector<int>&dp){
        if(ind==0){
            return arr[ind];
        }
        if(ind<0){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int notPick = sol(ind-1,arr,dp);
        int pick = arr[ind]+sol(ind-2,arr,dp);
        return dp[ind] = max(notPick,pick);
    }
    int FindMaxSum(int arr[], int n)
    {
        vector<int>dp(n,-1);
        int x = sol(n-1,arr,dp);
        return x;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends