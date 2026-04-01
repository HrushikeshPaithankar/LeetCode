class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<int>pos(positions.size());
        for(int i=0;i<positions.size();i++)
        {
            pos[i]=i;
        }
        sort(pos.begin(),pos.end(),[&](int a,int b){
            return positions[a]<positions[b];
        }); 
        stack<int>st;
        for(int i=0;i<pos.size();i++)
        {
            while(!st.empty() && directions[st.top()]=='R' && directions[pos[i]]=='L')
            {
                if(healths[pos[i]]>healths[st.top()])
                {
                    healths[st.top()]=-1;
                    healths[pos[i]]-=1;
                    st.pop();
                }
                else if(healths[pos[i]]<healths[st.top()])
                {
                    healths[st.top()]-=1;
                    healths[pos[i]]=-1;
                    break;
                }
                else{
                    healths[st.top()]=-1;
                    healths[pos[i]]=-1;
                    st.pop();
                    break;
                }
            }
            if(healths[pos[i]]>0)
            {
                st.push(pos[i]);
            }
        }
        vector<int>final;
        for(int i=0;i<positions.size();i++)
        {
            if(healths[i]!=-1)
            {
            final.push_back(healths[i]);
            }
        }
        return final;
    }
};