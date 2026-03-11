class Solution {
public:
    int bitwiseComplement(int n) {
        if (n==0)
        {
            return 1;
        }
        string s="";
        while(n>0)
        {
            s+=(n%2+'0');
            n/=2;
        }
        reverse(s.begin(),s.end());
        int ans=0;
        int k=s.size()-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                ans+=(1LL<<(k-i));
            }
        }
        return ans;
    }
};