class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int i, j, k;
        for (i = 0; i < 4; i++) 
        {
            if (mat == target) 
            {
                return true;
            }
            for (j = 0; j < mat.size(); j++) 
            {
                for (k = j; k < mat[0].size(); k++) 
                {
                    swap(mat[j][k], mat[k][j]);
                }
            }
            reverse(mat.begin(), mat.end());
        }
        return false;
    }
};