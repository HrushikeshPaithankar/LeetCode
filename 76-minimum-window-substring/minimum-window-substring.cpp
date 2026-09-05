class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.size() < t.size()) {
            return "";
        }
        vector<int> freq(128, 0);
        int cnt = t.size();
        int l = 0, r = 0, mn = INT_MAX, st = 0;
        for (int i = 0; i < t.size(); i++) {
            freq[t[i]]++;
        }
        while (r < s.size()) {
            char c = s[r];
            if (freq[c] > 0) {
                cnt--;
            }
            freq[c]--;
            r++;
            while (cnt == 0) {
                if (r - l < mn) {
                    st = l;
                    mn = r - l;
                }
                if (freq[s[l]] == 0) {
                    cnt++;
                }
                freq[s[l]]++;
                l++;
            }
        }
        if (mn == INT_MAX) {
            return "";
        }
        return s.substr(st, mn);
    }
};