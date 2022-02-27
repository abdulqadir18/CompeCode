class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>ms,mt;
        for(int i=97; i<=122; i++)
        {
            char c=i;
            ms[c]=0;
            mt[c]=0;
        }
        
        for(int i=0; i<s.size(); i++)
        {
            ms[s[i]]++;
        }
        for(int i=0; i<t.size(); i++)
        {
            mt[t[i]]++;
        }
        
        int ans=0;
        for(int i=97; i<=122; i++)
        {
            char c=i;
            ans+=abs(ms[c]-mt[c]);
        }
        return ans;
    }
};