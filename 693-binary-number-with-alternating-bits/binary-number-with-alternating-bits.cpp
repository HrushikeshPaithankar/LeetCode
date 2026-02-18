class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        bool ch = true;
        long long a = n >> 1;
        long long b = n ^ a;
        if ((b & (b + 1)) != 0) 
        {
            ch = false;
        } 
        return ch;
    }
};