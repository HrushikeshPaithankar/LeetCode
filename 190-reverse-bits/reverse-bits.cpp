class Solution {
public:
    int reverseBits(int n) 
    {
        string s = "";
        for (int i = 0; i < 32; i++) 
        {
            s += (n & 1) + '0';
            n >>= 1;
        }

        long long sum = 0;
        long long cur = 1LL << 31;

        for (int i = 0; i < 32; i++) 
        {
            sum += cur * (s[i] - '0');
            cur >>= 1;
        }
        return sum;
    }
};