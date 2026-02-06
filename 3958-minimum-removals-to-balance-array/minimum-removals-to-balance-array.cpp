class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i, l=0, n=nums.size();
        int ans = n;
        for(i=0;i<n;i++)
        {
            while(nums[i]>(long long)k*nums[l])
            {
                l++;
            }
            ans=min(ans,n-(i-l+1));
        }
        return ans;
    }
};