class Solution {
public:
    bool checkString(string s) {
        bool c2=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                if(c2)
                {
                    return false;
                }
            }
            if(s[i]=='b')
            {
                c2=true;
            }
        }
        return true;
    }
};