class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if(encodedText.empty())
        {
            return encodedText;
        }
        int n=encodedText.size();
        int m=(n+rows-1)/rows;
        string ans;
        for(int i=0;i<m;i++)
        {
            int l=0,r=i;
            while(l<rows && r<m)
            {
                ans+=encodedText[l*m+r];
                l++;
                r++;
            }
        }
        while(!ans.empty() && ans.back()==' ')
        {
            ans.pop_back();
        }
        return ans;
    }
};