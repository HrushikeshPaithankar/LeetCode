class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        int i, j, k,u;
        int ans=0;
        vector<int>row(mat.size(),0),col(mat[0].size(),0);
        for (i = 0; i < mat.size(); i++) 
        {
            for(j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(i=0;i<mat.size();i++)
        {
            for(j=0;j<mat[0].size();j++)
            {
            if(mat[i][j]==1 && row[i]==1 && col[j]==1)
            {
                ans++;
            }
            }
        }
        return ans;
    }
};