class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int>freq;
        for(int i=0;i<word.size();i++)
        {
            freq[word[i]]++;
        }
        int ans=0;
        for(char c='A';c<='Z';c++)
        {
            if(freq[c] && freq[c+32])
            {
                ans++;
            }
        }
        return ans;
    }
};