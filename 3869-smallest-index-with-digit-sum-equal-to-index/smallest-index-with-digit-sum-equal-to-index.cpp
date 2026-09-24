class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int k=0,sum=0;
            string s=to_string(nums[i]);
            while(k<s.size())
            {
                sum+=(s[k]-'0');
                k++;
            }
            if(sum==i)
            {
                return i;
            }
        }
        return -1;
    }
};