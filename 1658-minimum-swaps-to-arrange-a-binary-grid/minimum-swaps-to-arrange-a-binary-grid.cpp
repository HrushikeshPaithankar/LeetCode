class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int i, j;
        vector<int> zeros;
        int cnt = 0;
        for (i = 0; i < grid.size(); i++) {
            cnt = 0;
            for (j = grid[0].size() - 1; j >= 0; j--) {
                if (grid[i][j] == 0) {
                    cnt++;
                } else {
                    break;
                }
            }
            zeros.push_back(cnt);
        }
        bool ch = true;
        int ans = 0;
        int r = zeros.size() - 1;
        for (i = 0; i < grid.size(); i++) {
            r = grid.size() - 1 - i;
            int l = i;
            while (l < grid.size() && zeros[l] < r) {
                l++;
            }
            if (l == grid.size()) {
                return -1;
            }
            while(l>i)
            {
            swap(zeros[l], zeros[l-1]);
            ans ++;
            l--;
            }
        }
        return ans;
    }
};