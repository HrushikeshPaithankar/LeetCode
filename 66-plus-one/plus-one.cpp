class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]+=1;
        int k=digits.size()-1;
        vector<int>a=digits;
        while(k>0)
        {
            if(a[k]>9)
            {
                a[k-1]+=1;
                a[k]%=10;
            }
            k--;
        }
        if(a[0]>9)
        {
            a[0]%=10;
            a.insert(a.begin(), 1);
        }
        return a;
    }
};