class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s="";
        while(n>0)
        {
            s+=(n%2+'0');
            n/=2;
        }
        bool ch=true;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='1' && s[i-1]=='1'  || s[i]=='0' && s[i-1]=='0')
            {
                ch=false;
            }
        }
        return ch;
    }
};