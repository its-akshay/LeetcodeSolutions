class Solution {
public:

    int dp[101][101];

    int util(vector<vector<int>>& grid, int m, int n, int i, int j)
    {
        if( i==m-1 && j==n-1)
            return 1;
        if( i>=m || j>=n )
            return 0;
        if(grid[i][j]==1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];

        return dp[i][j] = util(grid, m, n, i+1, j) + util(grid, m, n, i, j+1); 
    }

    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        memset(dp, -1, sizeof(dp));
        if(grid[m-1][n-1]==1)   return 0;
        return util(grid, m, n, 0, 0);
    }
};