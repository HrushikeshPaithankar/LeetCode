class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int size=pow(2,nums.size());
        vector<int>a(size,0);
        for(string num:nums)
        {
            int val=stoi(num,nullptr,2);
            a[val]++;
        }
        for(int i=0;i<size;i++)
        {
           if(a[i]==0)
           {
            string s=bitset<32>(i).to_string();
            s=s.substr(32-nums.size());
            return s;
           } 
        }
        return string(nums.size(),'0');
    }
};