class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int i, j;
        vector<vector<int>> ans(grid.size() - k + 1,
                                vector<int>(grid[0].size() - k + 1));
        for (i = 0; i <= grid.size() - k; i++) {
            for (j = 0; j <= grid[0].size() - k; j++) {
                vector<int> a;
                for (int u = i; u < i + k; u++) {
                    for (int l = j; l < j + k; l++) {
                        a.push_back(grid[u][l]);
                    }
                }
                sort(a.begin(), a.end());
                a.erase(unique(a.begin(), a.end()), a.end());
                if (a.size() <= 1) {
                    ans[i][j] = 0;
                } else {
                    int mn = INT_MAX;
                    for (int m = 0; m < a.size() - 1; m++) {
                        mn = min(mn, a[m + 1] - a[m]);
                    }
                    ans[i][j] = mn;
                }
            }
        }
        return ans;
    }
};