class Solution {
public:
    bool isSorted(string s)
    {
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] < s[i - 1])
                return false;
        }
        return true;
    }

    int minOperations(string s) {
        char mn = s[0], mx = s[0];

        for (int i = 0; i < s.size(); i++)
        {
            mn = min(mn, s[i]);
            mx = max(mx, s[i]);
        }
        if(isSorted(s))
        {
            return 0;
        }
        if(s.size()==2)
        {
            return -1;
        }
        if(s.front()==mn || s.back()==mx)
        {
            return 1;
        }
        for(int i=1;i<s.size()-1;i++)
        {
            if(s[i]==mn || s[i]==mx)
            {
                return 2;
            }
        }
        return 3;
    }
};