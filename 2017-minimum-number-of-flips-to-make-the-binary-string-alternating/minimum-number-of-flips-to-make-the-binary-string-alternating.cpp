class Solution {
public:
int ans=1e9;
    int minFlips(string s) {
        s+=s;
        string a="",b="";
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                a+='0';
                b+='1';
            }
            else{
                a+='1';
                b+='0';
            }
        }
        int cnt1=0,cnt2=0;
        int l=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=a[i])
            {
                cnt1++;
            }
            if(s[i]!=b[i])
            {
                cnt2++;
            }
            if(i-l+1>(s.size()/2))
            {
                if(s[l]!=a[l])
                {
                    cnt1--;
                }
                if(s[l]!=b[l])
                {
                    cnt2--;
                }
                l++;
            }
            if(i-l+1==(s.size()/2))
            {
                ans=min(ans,min(cnt1,cnt2));
            }
        }
        return ans;
    }
};