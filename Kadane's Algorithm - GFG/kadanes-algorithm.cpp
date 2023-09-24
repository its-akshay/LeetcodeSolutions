//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long maxi = LONG_MIN;
        long long sum = 0;
        int ansStart = 0;
        int start = -1;
        int end = -1;
        for(int i=0;i<n;i++){
            if(sum==0){
                start = i;
            }
            sum+=arr[i];
            if(sum>maxi){
                maxi = sum;
                ansStart = start;
                end = i;
            }
            if (sum < 0) {
            sum = 0;
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends