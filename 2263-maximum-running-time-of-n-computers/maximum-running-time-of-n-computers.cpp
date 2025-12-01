class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        sort(batteries.begin(),batteries.end());
        long long sum=0;
        int i;
        for(i=0;i<batteries.size();i++)
        {
            sum+=batteries[i];
        }
        long long ans=0;
        for(i=batteries.size()-1;i>=0;i--)
        {
            if(batteries[i]<=sum/n)
            {
                break;
            }
            sum-=batteries[i];
            n--;
        }
        return sum/n;
    }
};