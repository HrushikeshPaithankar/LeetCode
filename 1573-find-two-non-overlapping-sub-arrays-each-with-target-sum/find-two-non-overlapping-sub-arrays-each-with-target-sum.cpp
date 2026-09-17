class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int ans = 1e9;
        int n = arr.size(), k = 0;
        int sum = 0;
        vector<int> mn(n, 1e9);
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            while (sum > target) {
                sum -= arr[k];
                k++;
            }
            if (sum == target) {
                int len = i - k + 1;
                if (k > 0 && mn[k - 1] != 1e9) {
                    ans = min(ans, len + mn[k - 1]);
                }
                if (i == 0) {
                    mn[i] = len;
                } else {
                    mn[i] = min(mn[i - 1], len);
                }
            } else {
                if (i) {
                    mn[i] = mn[i - 1];
                }
            }
        }
        if (ans == 1e9) {
            return -1;
        }
        return ans;
    }
};