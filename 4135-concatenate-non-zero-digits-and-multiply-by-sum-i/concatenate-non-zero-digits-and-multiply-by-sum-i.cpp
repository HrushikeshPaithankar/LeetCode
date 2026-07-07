class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string num="";
        long long sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                num+=s[i];
                sum+=(s[i]-'0');
            }
        }
        if(num.empty())
        {
            return 0;
        }
        long long fin=stoi(num);
        return sum*fin;
    }
};