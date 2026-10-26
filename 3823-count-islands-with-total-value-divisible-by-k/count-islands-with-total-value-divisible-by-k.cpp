class Solution {
public:
int m,n;
    long long sum = 0, ans = 0;
    vector<vector<bool>> check;
    long long dfs(vector < vector<int>> &grid, int i, int j) {
        if (check[i][j] || grid[i][j]==0) {
            return 0;
        }
        check[i][j] = true;
        sum += grid[i][j];
        if (i) {
            dfs(grid, i - 1, j);
        }
        if (j) {
            dfs(grid, i, j - 1);
        }
        if (i + 1 < m) {
            dfs(grid, i + 1, j);
        }
        if (j + 1 < n) {
            dfs(grid, i, j + 1);
        }
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size(), n = grid[0].size();
        sum=0,ans=0;
        check.assign(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!check[i][j] && grid[i][j] != 0) {
                    sum = 0;
                    sum = dfs(grid, i, j);
                    if (sum % k == 0) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};