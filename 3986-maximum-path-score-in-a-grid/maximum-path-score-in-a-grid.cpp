class Solution {
public:
    int maxPathScore(vector<vector<int>>& grid, int k) {
        int n = grid[0].size(), m = grid.size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n,vector<int>(k+1,-1)));
        dp[0][0][0]=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int c=0;c<=k;c++)
                {
                    if(dp[i][j][c]==-1)
                    {
                        continue;
                    }
                    if(i+1 <m)
                    {
                        if(grid[i+1][j]==0)
                        {
                            if(c <=k)
                            {
                                dp[i+1][j][c]=max(dp[i+1][j][c],dp[i][j][c]+grid[i+1][j]);
                            }
                        }
                        else{
                            if(c+1<=k)
                            {
                                dp[i+1][j][c+1]=max(dp[i+1][j][c+1],dp[i][j][c]+grid[i+1][j]);
                            }
                        }
                    }

                    if(j+1 <n)
                    {
                        if(grid[i][j+1]==0)
                        {
                            if(c <=k)
                            {
                                dp[i][j+1][c]=max(dp[i][j+1][c],dp[i][j][c]+grid[i][j+1]);
                            }
                        }
                        else{
                            if(c+1<=k)
                            {
                                dp[i][j+1][c+1]=max(dp[i][j+1][c+1],dp[i][j][c]+grid[i][j+1]);
                            }
                        }
                    }
                }
            }
        }
        int ans=-1;
        for(int c=0;c<=k;c++)
        {
            ans=max(ans,dp[m-1][n-1][c]);
        }
        return ans;
    }
};