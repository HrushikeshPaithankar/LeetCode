class Solution {
public:
    string generateString(string str1, string str2) {
        int n=str1.size(),m=str2.size();
        string s(n+m-1,'a');
        vector<int>ch(n+m-1,0);
        for(int i=0;i<n;i++)
        {
            if(str1[i]=='T')
            {
                for(int j=i;j<i+m;j++)
                {
                    if(ch[j] && s[j]!=str2[j-i])
                    {
                        return "";
                    }
                    else{
                        s[j]=str2[j-i];
                        ch[j]=1;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(str1[i]=='F')
            {
                bool check=false;
                int idx=-1;
                for(int j=i+m-1;j>=i;j--)
                {
                    if(str2[j-i]!=s[j])
                    {
                        check=true;
                    }
                    if(idx==-1 && !ch[j])
                    {
                        idx=j;
                    }
                }
                if(check)
                {
                    continue;
                }
                else if(idx!=-1)
                {
                    s[idx]='b';
                }
                else{
                    return "";
                }
            }
        }
        return s;
    }
};