class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int i,j;
        for(i=0;i<k;i++)
        {
            for(j=0;j<k>>1;j++)
            {
                swap(grid[x+j][y+i],grid[x+k-j-1][y+i]);
            }
        }
        return grid;
    }
};