class Solution {
public:

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size();
    
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int maxRowIndex = 0;
        
        for (int i = 1; i < m; ++i) {
            if (mat[i][mid] > mat[maxRowIndex][mid]) {
                maxRowIndex = i;
            }
        }
        
        bool isPeak = true;
        
        if (mid > 0 && mat[maxRowIndex][mid - 1] > mat[maxRowIndex][mid]) {
            isPeak = false;
            right = mid - 1;
        } else if (mid < n - 1 && mat[maxRowIndex][mid + 1] > mat[maxRowIndex][mid]) {
            isPeak = false;
            left = mid + 1;
        }
        
        if (isPeak) {
            return {maxRowIndex, mid};
        }
    }
    
    return {-1, -1}; // No peak element found (this should not occur if problem assumptions are met)
}
};