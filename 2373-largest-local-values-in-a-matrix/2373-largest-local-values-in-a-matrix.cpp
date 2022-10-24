class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int m = grid[0].size();
        int n = grid.size();
        vector<vector<int>> ans(n - 2, vector<int>(m - 2));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < n - 2; k++) {
                    if (i >= k && i - k <= 2) {
                        for (int l = 0; l < m - 2; l++) {
                            if (j >= l && j - l <= 2) {
                                ans[k][l] = max(ans[k][l], grid[i][j]);
                            }
                        }
                        
                    }  
                }
            }
        }
        return ans;
    }
};