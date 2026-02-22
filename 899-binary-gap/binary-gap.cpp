class Solution {
public:
    int binaryGap(int n) {
        string s="";
        while(n>0)
        {
            s+=(n%2+'0');
            n/=2;
        }
        int cnt=0;
        int idx=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                cnt++;
                if(cnt>1)
                {
                ans=max(ans,i-idx);
                }
                idx=i;
            }
        }
        if(cnt>1)
        {
        return ans;
        }
        else{
            return 0;
        }
    }
};