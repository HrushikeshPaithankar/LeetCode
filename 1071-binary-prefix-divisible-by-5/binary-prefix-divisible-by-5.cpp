class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int x=0;
        vector<bool>a;
        for(auto &p:nums){
            x=((x<<1)+p);
            x%=5;
            if(x==0)
            {
                a.push_back(true);
            }
            else{
                a.push_back(false);
            }
        }
        return a;
    }
};