class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans=1e18;
        long long a=cost1,b=cost2,c=costBoth,d=need1,e=need2;
        ans=min(ans,a*d+b*e);
        ans=min(ans,c*min(d,e)+a*(d-min(d,e))+b*(e-min(d,e)));
        ans=min(ans,c*max(d,e));
        return ans;
    }
};