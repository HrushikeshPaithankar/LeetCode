class Solution {
public:
bool ch(vector<int>piles,int mid,int h)
{
    long long tot=0;
    for(int i=0;i<piles.size();i++)
    {
        tot+=(piles[i]+mid-1)/mid;
    }
    return (tot<=h);
}
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int l=1,r=*max_element(piles.begin(),piles.end());
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(ch(piles,mid,h))
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};