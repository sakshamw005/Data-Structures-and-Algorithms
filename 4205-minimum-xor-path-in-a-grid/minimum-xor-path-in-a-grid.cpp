class Solution {
public:
    int solve(vector<vector<int>>& grid, int r, int c, int x,vector<vector<vector<int>>>& dp) {
        int m = grid.size(), n = grid[0].size();
        if (r >= m || c >= n){
            return INT_MAX;
        }
        x ^= grid[r][c];
        if (r == m - 1 && c == n - 1){
            return x;
        }
        if (dp[r][c][x] != -1){
            return dp[r][c][x];
        }
        int right = solve(grid, r, c + 1, x, dp);
        int down = solve(grid, r + 1, c, x, dp);
        return dp[r][c][x] = min(right, down);
    }

    int minCost(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(1024, -1)));
        return solve(grid, 0, 0, 0, dp);
    }
};