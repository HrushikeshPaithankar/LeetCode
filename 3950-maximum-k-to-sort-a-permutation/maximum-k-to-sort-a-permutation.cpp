class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans ;
        bool ch = true;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                if (ch) {
                    ans = nums[i];
                    ch=false;
                } else {
                    ans &= nums[i];
                }
            }
        }
        if (!ch) {
            return ans;
        }
        return 0;
    }
};