class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        long long l = 1, r = 1e16;
        while (l < r) {
            long long mid = (l + r) / 2;
            long long tot = 0;
            for (int i = 0; i < workerTimes.size() && tot < mountainHeight;
                 i++) {
                tot +=
                    (long long)(sqrt((double)mid / workerTimes[i] * 2 + 0.25) -
                                0.5);
            }
            if (tot >= mountainHeight) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};