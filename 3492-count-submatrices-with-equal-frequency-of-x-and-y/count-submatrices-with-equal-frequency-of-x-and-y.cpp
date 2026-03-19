class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        vector<long long>x(grid[0].size());
        vector<long long>y(grid[0].size());
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {int cx=0,cy=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='X')
                {
                    cx++;
                }
                if(grid[i][j]=='Y')
                {
                    cy++;
                }
                x[j]+=cx;
                y[j]+=cy;
                if(x[j]>0 && x[j]==y[j])
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};