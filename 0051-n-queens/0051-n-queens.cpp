class Solution {
public:
    void solve(int col,vector<string>&ans,vector<vector<string>>&res,vector<int>&left,vector<int>&upper,vector<int>&lower,int n){
        if(col==n){
            res.push_back(ans);
            return;
        }
        for(int row=0;row<n;row++){
            if(left[row]==0&&lower[row+col]==0&&upper[n-1+row-col]==0){
                ans[row][col]='Q';
                left[row] = 1;
                lower[row+col] = 1;
                upper[n-1+row-col]=1;
                solve(col+1,ans,res,left,upper,lower,n);
                 ans[row][col]='.';
                left[row] = 0;
                lower[row+col] = 0;
                upper[n-1+row-col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>ans(n);
        vector<vector<string>>res;
        string s(n,'.');
        for(int i=0;i<n;i++){
            ans[i] = s;
        }
        //till this moment i created a vector o strings
        vector<int>left(n,0);
        vector<int>upper(2*n-1,0);
        vector<int>lower(2*n-1,0);
        solve(0,ans,res,left,upper,lower,n);
        return res;
    }
};