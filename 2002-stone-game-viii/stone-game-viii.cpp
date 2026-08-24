class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n=stones.size();
        vector<int>pre(n+1);
        for(int i=1;i<=n;i++)
        {
            pre[i]+=(stones[i-1]+pre[i-1]);
        }
        long long best=pre[n];
        for(int i=n-1;i>=2;i--)
        {
            best=max(best,pre[i]-best);
        }
        return (int)best;
    }
};