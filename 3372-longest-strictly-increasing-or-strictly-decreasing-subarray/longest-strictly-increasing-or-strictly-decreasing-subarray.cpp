class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int d=1,in=1;
        int ans=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                in++;
                ans=max(ans,d);
                d=1;
            }
            else if(nums[i]<nums[i-1])
            {
                d++;
                ans=max(ans,in);
                in=1;    
            }
            else{
                ans=max({ans,in,d});
                d=1;
                in=1;
            }
        }
        ans=max({ans,in,d});
        return ans;
    }
};