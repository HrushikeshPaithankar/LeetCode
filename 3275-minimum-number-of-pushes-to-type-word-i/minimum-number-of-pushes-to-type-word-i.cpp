class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>freq;
        for(int i=0;i<word.size();i++)
        {
            freq[word[i]]++;
        }
        vector<int>cnt;
        for(auto &p:freq)
        {
            cnt.push_back(p.second);
        }
        sort(cnt.begin(),cnt.end());
        int ans=0;
        for(int i=0;i<cnt.size();i++)
        {
            if(i<8)
            {
                ans++;
            }
            else if(i<16)
            {
                ans+=2;
            }
            else if(i<24)
            {
                ans+=3;
            }
            else{
                ans+=4;
            }
        }
        return ans;
    }
};