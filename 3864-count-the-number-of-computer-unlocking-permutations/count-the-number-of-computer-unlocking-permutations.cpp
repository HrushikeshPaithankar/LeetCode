class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int i;
        long long mod=1e9+7;
        for(i=1;i<complexity.size();i++)
        {
            if(complexity[i]<=complexity[0])
            {
                return 0;
            }
        }
        long long fact=1;
        for(i=1;i<complexity.size();i++)
        {
            fact=(fact*i)%mod;
        }
        return (int)fact;
    }
};