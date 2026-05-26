class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int>freq;
        for(int i=0;i<word.size();i++)
        {
            freq[word[i]]++;
        }
        int ans=0;
        for(auto &p:freq)
        {
            if(freq[p.first+32])
            {
                ans++;
            }
        }
        return ans;
    }
};