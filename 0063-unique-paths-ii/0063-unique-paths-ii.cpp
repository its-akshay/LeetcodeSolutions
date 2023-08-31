class Solution {
public:
        int countWaysUtil(int i, int j, vector<vector<int> > &dp, vector<vector<int> > &maze) {
            if(i>=0&&j>=0&&maze[i][j]==1){
               return 0;
            }
            if (i == 0 && j == 0)
                return 1;
            if (i < 0 || j < 0 )
                return 0;
            if (dp[i][j] != -1) {return dp[i][j];}

            int up = countWaysUtil(i - 1, j, dp, maze);
            int left = countWaysUtil(i, j - 1, dp, maze);

            return dp[i][j] = up + left;
         }


    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n= grid[0].size();
        vector<vector<int> > dp(m, vector<int>(n, -1));
        return countWaysUtil(m - 1, n - 1, dp, grid);
    }
       
};