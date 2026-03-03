class Solution {
public:
    char findKthBit(int n, int k) {
        int i;
        string s="0";
        string rev;
        while(s.size()<k)
        {
            rev=inv(s);
            reverse(rev.begin(),rev.end());
            s=s+'1'+rev;
        }
        return s[k-1];
    }
    string inv(string s)
    {
        string final="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                final.push_back('0');
            }
            else{
                final.push_back('1');
            }
        }
        return final;
    }
};