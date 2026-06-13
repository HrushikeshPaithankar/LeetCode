class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        map<int, char> order;
        for (int i = 0; i < 26; i++) 
        {
            order[i]='z'-i;
        }
        string ans="";
        int sum=0;
        for (int i = 0; i < words.size(); i++) 
        {sum=0;
            for (int j = 0; j < words[i].size(); j++) 
            {
                sum += weights[words[i][j] - 'a'];
            }
            sum %= 26;
            ans+=order[sum];
        }
        return ans;
    }
};