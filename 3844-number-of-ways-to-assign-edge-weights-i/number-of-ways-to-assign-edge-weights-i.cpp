class Solution {
public:
    int MOD=1e9+7;
    int dfs(vector<vector<int>>&a ,int node,int par)
    {
        int depth=0;

        for(auto &p:a[node])
        {
            if(p==par)
            {
                continue;
            }
            depth=max(depth,1+dfs(a,p,node));
        }

        return depth;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        vector<vector<int>>a(n+1);
        for(auto &e:edges)
        {
            int u=e[0];
            int v=e[1];

            a[u].push_back(v);
            a[v].push_back(u);
        }
        int depth=dfs(a,1,-1);

        long long res=1;

        for(int i=1;i<depth;i++)
        {
            res=(res*2)%MOD;
        }
        return res;
    }
};