class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                int ans=int(sqrt(i*i+j*j));
                if(ans<=n && ans*ans==i*i+j*j)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};