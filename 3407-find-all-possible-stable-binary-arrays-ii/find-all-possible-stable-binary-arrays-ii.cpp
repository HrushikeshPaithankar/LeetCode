class Solution {
public:
    int numberOfStableArrays(int zero, int one, int limit) {
        int mod=(int)1e9+7;
        vector<vector<int>>dp0(one+1,vector<int>(zero+1));
        vector<vector<int>>dp1(one+1,vector<int>(zero+1));
        for(int i=1;i<=min(one,limit);i++)
        {
            dp1[i][0]=1;
        }
        for(int i=1;i<=min(zero,limit);i++)
        {
            dp0[0][i]=1;
        }
        int o,z;
        for(o=1;o<=one;o++)
        {
            for(z=1;z<=zero;z++)
            {
                dp0[o][z]=dp1[o][z-1];
                dp0[o][z]=(dp0[o][z]+dp0[o][z-1])%mod;
                if(z-limit-1>=0)
                {
                    dp0[o][z]=(dp0[o][z]-dp1[o][z-limit-1]+mod)%mod;
                }

                dp1[o][z]=dp1[o-1][z];
                dp1[o][z]=(dp1[o][z]+dp0[o-1][z])%mod;
                if(o-limit-1>=0)
                {
                    dp1[o][z]=(dp1[o][z]-dp0[o-limit-1][z]+mod)%mod;
                }
            }
        }
        return (dp0[one][zero]+dp1[one][zero])%mod;
    }
};