class Solution {
public:
    bool sumGame(string num) {
        long long s1=0,s2=0,q1=0,q2=0;
        for(int i=0;i<num.size()/2;i++)
        {
            if(num[i]=='?')
            {
                q1++;
            }
            else{
                s1+=(num[i]-'0');
            }
        }
        for(int i=num.size()/2;i<num.size();i++)
        {
            if(num[i]=='?')
            {
                q2++;
            }
            else{
                s2+=(num[i]-'0');
            }
        }
        if(q1+q2==0)
        {
            return (s1!=s2);
        }
        if((q1+q2)%2)
        {
            return true;
        }
        if(q1==q2)
        {
            return (s1!=s2);
        }
        return 2*(s1-s2)!=9*(q2-q1);
    }
};