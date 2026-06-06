class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n+1,0),suf(n+1,0);
        for(int i=0;i<n-1;i++)
        {
            pre[i+1]=pre[i]+nums[i];
        }
        for(int i=n-1;i>0;i--)
        {
            suf[i-1]=suf[i]+nums[i];
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(abs(pre[i]-suf[i]));
        }
        return ans;
    }
};