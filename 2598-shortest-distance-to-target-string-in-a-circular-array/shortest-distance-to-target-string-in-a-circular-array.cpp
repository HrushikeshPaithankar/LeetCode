class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int mn = 1e9;
        for (int i = 0; i < n; i++) 
        {
            if (words[i] == target) 
            {
                mn = min(mn, min(abs(i - startIndex), n - abs(i-startIndex)));
            }
        }
        if (mn == 1e9) {
            return -1;
        }
        return mn;
    }
};