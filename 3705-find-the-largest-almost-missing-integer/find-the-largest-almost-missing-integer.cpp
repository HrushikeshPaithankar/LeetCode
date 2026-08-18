class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(k==n)
            {
                ans=max(ans,nums[i]);
            }
            else if(freq[nums[i]]==1)
            {
                if(k==1)
                {
                ans=max(ans,nums[i]);
                }
                else{
                    if(i==0 || i==n-1)
                    {
                        ans=max(ans,nums[i]);
                    }
                }
            }
        }
        return ans;
    }
};