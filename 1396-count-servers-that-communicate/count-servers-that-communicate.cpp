class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        map<int, int> freq,f2;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    freq[i]++;
                    f2[j]++;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1 && (freq[i] > 1 || f2[j] > 1)) {
                    ans++;
                }
            }
        }
        return ans;
    }
};