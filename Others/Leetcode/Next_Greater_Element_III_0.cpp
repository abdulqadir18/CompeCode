class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        bool flag=false;
        if(n>pow(2,31)-1) return -1;
        for(int i=s.size()-1; i>0; i--)
        {
            if(s[i]>s[i-1]) {flag=true; break;}
        }
        if(!flag) return -1;
        for(int i=s.size()-1; i>0; i--)
        {
            if(s[i]>s[i-1])
            {
                sort(s.begin()+i,s.end());
                for(int j=i; j<s.size(); j++)
                {
                    if(s[j]>s[i-1]) {swap(s[j],s[i-1]); break;}
                }
                break;
            }
        }
        //cout<<s<<"\n";
        long long int ans=(s[0]-'0');
        for(int i=1; i<s.size(); i++)
        {
            ans=ans*10+(s[i]-'0');
        }
        
        if(ans>pow(2,31)-1) return -1;
        return ans;
    }
};