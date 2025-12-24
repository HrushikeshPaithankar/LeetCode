class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int i,sum=0,ans=0,cnt=0;
        for(i=0;i<apple.size();i++)
        {
            sum+=apple[i];
        }
        for(i=0;i<capacity.size();i++)
        {
            ans+=capacity[i];
            cnt++;
            if(ans>=sum)
            {
                break;
            }
        }
        return cnt;
    }
};