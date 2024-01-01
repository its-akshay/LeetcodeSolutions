class Solution {
public:
    
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n,vector<int>&left,vector<int>&upper,vector<int>&lower){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(left[row]==0 && lower[row+col]==0&&upper[n-1+(col-row)]==0){
                board[row][col] = 'Q';
                left[row] = 1;
                lower[row+col] = 1;
                upper[n-1+(col-row)]=1;
                solve(col+1,board,ans,n,left,upper,lower);
                board[row][col] = '.';
                left[row] = 0;
                lower[row+col] = 0;
                upper[n-1+(col-row)]=0;
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        vector<int>left(n,0);
        vector<int>upper(2*n-1,0);
        vector<int>lower(2*n-1,0);

        solve(0,board,ans,n,left,upper,lower);
        return ans;
        
    }
};