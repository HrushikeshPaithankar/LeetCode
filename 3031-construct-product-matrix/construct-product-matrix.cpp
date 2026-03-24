class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int i, j;
        int n = grid.size(), m = grid[0].size();
        long long suf=1;
        vector<vector<int>> a(n,vector<int>(m));
        for(i=n-1;i>=0;i--)
        {
            for(j=m-1;j>=0;j--)
            {
                a[i][j]=suf;
                suf=(suf*grid[i][j])%12345;
            }
        }
        long long pre=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                a[i][j]=(a[i][j]*pre)%12345;
                pre=(pre*grid[i][j])%12345;
            }
        }
        return a;
    }
};