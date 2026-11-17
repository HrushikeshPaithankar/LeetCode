class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = 1e9;
        int n = nums.size();
        vector<int> pre(n + 1, 0);
        for (int i = 0; i < n ; i++) {
            pre[i + 1] = pre[i] + nums[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=l;j<=r;j++)
            {
                if(i+j<=n)
                {
                    int sum=pre[j+i]-pre[i];
                    if(sum>0)
                    {
                        ans=min(ans,sum);
                    }
                }
            }
        }
        if(ans==1e9)
        {
            return -1;
        }
        return ans;
    }
};