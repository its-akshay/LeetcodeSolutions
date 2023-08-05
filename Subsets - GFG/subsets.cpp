//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    // void fun(int ind,int sum ,vector<int>arr,int N,vector<int>&ans,vector<vector<int>>&anss){
    //     if(ind==arr.size()){
    //         anss.push_back(ans);
    //         return;
    //     }
    //     fun(ind+1,sum,arr,N,ans,anss);
    //     fun(ind+1,sum+arr[ind],arr,N,ans,anss);
    // }
    // vector<vector<int> > subsets(vector<int>& arr)
    // {
    //     int N =arr.size();
    //     vector<int>ans;
    //     vector<vector<int>>anss;
    //     fun(0,0,arr,N,ans,anss);
    //     return anss;
    // }
    void fun(int ind, int sum, vector<int>& arr, int N, vector<int>& ans, vector<vector<int>>& anss) {
    if (ind == N) {
        anss.push_back(ans);
        return;
    }
    
    // Exclude the current element
    fun(ind + 1, sum, arr, N, ans, anss);
    
    // Include the current element
    ans.push_back(arr[ind]);
    fun(ind + 1, sum + arr[ind], arr, N, ans, anss);
    
    // Backtrack (remove the current element from the current subset)
    ans.pop_back();
}

vector<vector<int>> subsets(vector<int>& arr) {
    int N = arr.size();
    vector<int> ans;
    vector<vector<int>> anss;
    fun(0, 0, arr, N, ans, anss);
    sort(anss.begin(),anss.end());
    return anss;
}

};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends