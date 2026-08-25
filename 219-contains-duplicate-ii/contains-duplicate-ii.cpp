class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>freq;
        for(int i=0;i<nums.size();i++)
        {
            if(i>k)
            {
                freq.erase(nums[i-k-1]);
            }
            if(freq.count(nums[i]))
            {
                return true;
            }
            freq.insert(nums[i]);
        }
        return false;
    }
};