class Solution {
public:
    int characterReplacement(string s, int k) {
        int mx=0,i;
        map<char,int>freq;
        int cnt=0;
        int ans=0;
        for(i=0;i<s.size();i++)
        {
            freq[s[i]]++;
            mx=max(mx,freq[s[i]]);
            while(i-cnt+1-mx>k)
            {
                freq[s[cnt]]--;
                cnt++;
            }
            ans=max(ans,i-cnt+1);
        }
        return ans;
    }
};