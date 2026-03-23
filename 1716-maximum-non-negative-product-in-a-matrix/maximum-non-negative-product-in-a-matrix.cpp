class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int MOD = 1e9 + 7;
        int m = grid.size(), n = grid[0].size();
        // m is cols , n is rows
        int i, j;
        vector<vector<vector<long long>>> dp(m+1,
                                       vector<vector<long long>>(n+1, vector<long long>(2)));
        dp[0][0][0] = dp[0][0][1] = grid[0][0];
        int p = grid[0][0];
        for (i = 1; i < n; i++) {
            p *= grid[0][i];
            dp[0][i][0] = dp[0][i][1] = p;
        }
        p = grid[0][0];
        for (i = 1; i < m; i++) {
            p *= grid[i][0];
            dp[i][0][0] = dp[i][0][1] = p;
        }
        for (i = 1; i < m; i++) {
            for (j = 1; j < n; j++) {
                dp[i][j][0] = min(min(dp[i - 1][j][0] * grid[i][j],
                                      dp[i - 1][j][1] * grid[i][j]),
                                  min(dp[i][j - 1][0] * grid[i][j],
                                      dp[i][j - 1][1] * grid[i][j]));
                dp[i][j][1] = max(max(dp[i - 1][j][0] * grid[i][j],
                                      dp[i - 1][j][1] * grid[i][j]),
                                  max(dp[i][j - 1][0] * grid[i][j],
                                      dp[i][j - 1][1] * grid[i][j]));
            }
        }
        if (dp[m - 1][n - 1][1] < 0) {
            return -1;
        }
        return dp[m - 1][n - 1][1] % MOD;
    }
};