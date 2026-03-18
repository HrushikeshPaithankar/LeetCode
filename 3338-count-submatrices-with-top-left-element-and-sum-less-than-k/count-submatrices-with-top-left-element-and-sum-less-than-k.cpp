class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int ans=0;
        vector<vector<int>>p(grid.size()+1,vector<int>(grid[0].size()+1,0));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                p[i+1][j+1]=grid[i][j]+p[i][j+1]+p[i+1][j]-p[i][j];
                if(p[i+1][j+1] <=k)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};