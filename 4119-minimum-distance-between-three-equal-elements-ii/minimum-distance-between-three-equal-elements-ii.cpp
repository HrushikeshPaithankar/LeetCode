class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int,vector<int>>freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]].push_back(i);
        }
        int ans=1e9;
        for(auto &p:freq)
        {
            vector<int>a=p.second;
            if(a.size()>=3)
            {
                for(int i=0;i<=a.size()-3;i++)
                {
                    int dis=abs(a[i]-a[i+1])+abs(a[i]-a[i+2])+abs(a[i+1]-a[i+2]);
                    ans=min(ans,dis);
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