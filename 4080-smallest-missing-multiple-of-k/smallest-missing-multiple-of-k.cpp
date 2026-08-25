class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        int temp = k;
        while (true) {
            if (freq.find(temp) == freq.end()) {
                return temp;
            }
            temp += k;
        }
    }
};