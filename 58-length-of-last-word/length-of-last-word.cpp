class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int ans=0;
        while(i>=0)
        {
            if(s[i]==' ')
            {
                i--;
            }
            else{
                break;
            }
        }
        while(i>=0)
        {
            if(s[i]!=' ')
            {
                ans++;
                i--;
            }
            else{
                break;
            }
        }
        return ans;
    }
};