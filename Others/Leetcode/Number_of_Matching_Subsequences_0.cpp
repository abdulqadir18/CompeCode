class Solution {
public:
    unordered_map<string,int>m;
    void allp(string s, string p, int n)
    {
        if(n==s.size()) {m[p]++; return;}
        allp(s,p+s[n],n+1);
        allp(s,p,n+1);
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        
        allp(s,"",0);
        int ans=0;
        for(int i=0; i<words.size(); i++) if(m.find(words[i])!=m.end()) ans++;
        return ans;
    }
};