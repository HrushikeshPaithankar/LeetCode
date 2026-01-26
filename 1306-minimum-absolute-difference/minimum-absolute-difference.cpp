class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int i;
        sort(arr.begin(),arr.end());
        int mn=1e9;
        for(i=0;i<arr.size()-1;i++)
        {
            mn=min(mn,abs(arr[i+1]-arr[i]));
        }
        vector<vector<int>>ans;
        vector<int>cp;
        for(i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]==mn)
            {
                cp.push_back(arr[i]);
                cp.push_back(arr[i+1]);
                ans.push_back(cp);
                cp.clear();
            }
        }
        return ans;
    }
};