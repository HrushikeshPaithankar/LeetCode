class Solution {
public:
    int numSteps(string s) {
        int lstbit = s[s.size() - 1];
        int ex = 0;
        int ans = 0;
        for (int i = s.size() - 1; i > 0; i--) {
            lstbit = (s[i] & 1) + ex;
            if (lstbit == 1) {
                ans += 2;
                ex = 1;
            } else {
                ans++;
            }
        }
        return ans+ex;
    }
};