class Solution {
public:
    bool check(vector<int>& nums) {
        bool ch=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>nums[(i+1)%n] && exchange(ch,1))
            {
                return 0;
            }
        }
        return 1;
    }
};