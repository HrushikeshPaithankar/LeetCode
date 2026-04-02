class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {
        int n = coins.size(), m = coins[0].size();
        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(m, vector<int>(3, -1e9)));
        dp[0][0][0] = coins[0][0];
        dp[0][0][1] = dp[0][0][2]=0;
        int i, j, k;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                for (k = 0; k < 3; k++) {
                    if (i > 0) {
                        dp[i][j][k] =
                            max(dp[i][j][k], dp[i - 1][j][k] + coins[i][j]);
                    }
                    if (j > 0) {
                        dp[i][j][k] =
                            max(dp[i][j][k], dp[i][j - 1][k] + coins[i][j]);
                    }
                    if (i > 0 && k > 0) {
                        dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j][k - 1]);
                    }
                    if (j > 0 && k > 0) {
                        dp[i][j][k] = max(dp[i][j][k], dp[i][j - 1][k - 1]);
                    }
                }
            }
        }
        int mx = -1e9;
        for (i = 0; i < 3; i++) {
            mx = max(dp[n - 1][m - 1][i], mx);
        }
        return mx;
    }
};