class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double mx=0;
        for(int i=0;i<k;i++)
        {
            mx+=nums[i];
        }
        double ans=-1e9;
        ans=max(ans,mx/k);
        int idx=0;
        for(int i=k;i<nums.size();i++)
        {
            mx+=nums[i];
            mx-=nums[idx];
            idx++;
            ans=max(ans,mx/k);
        }
        return ans;
    }
};