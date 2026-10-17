class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<int>dig;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int k=0,sum=0;
            string s=to_string(nums[i]);
            while(k<s.size())
            {
                sum+=s[k]-'0';
                k++;
            }
            dig.push_back(sum);
        }
        vector<int>pos(n);
        iota(pos.begin(),pos.end(),0);
        sort(pos.begin(),pos.end(),[&](int i,int j){
            if(dig[i]==dig[j])
            {
                return nums[i]<nums[j];
            }
            return dig[i]<dig[j];
        });
        int ans=0;
        for(int i=0;i<n;i++)
        {
            while(pos[i]!=i)
            {
                    ans++;
                    swap(pos[i],pos[pos[i]]);
            }
        }
        return ans;
    }
};