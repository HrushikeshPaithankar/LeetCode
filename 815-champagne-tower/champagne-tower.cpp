class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        int i,j;
        double a[102][102]={0};
        a[0][0]=(double)poured;
        for(i=0;i<=query_row;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(a[i][j]>1)
                {
                    double rem=(a[i][j]-1.0)/2.0;
                    a[i][j]=1.0;
                    a[i+1][j]+=rem;
                    a[i+1][j+1]+=rem;
                }
            }
        }
        return a[query_row][query_glass];
    }
};