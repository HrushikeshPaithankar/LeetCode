class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int>freq;
        int mx=0,cnt=1;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
            mx=max(mx,nums[i]);
            if(cnt==nums[i])
            {
                cnt++;
            }
        }
        if(cnt!=mx+1)
        {
            return false;
        }
        for(auto &p:freq)
        {
            if( p.first!=mx && p.second!=1 )
            {
                return false;
            }
            if(p.first==mx && p.second!=2)
            {
                return false;
            }
        }
        return true;
    }
};