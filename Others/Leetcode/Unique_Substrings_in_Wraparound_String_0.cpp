class Solution {
public:
    bool isNext(char a, char b) {return a=='z'?b=='a':b==a+1;}
    
    int findSubstringInWraproundString(string p) {
        unordered_map<char,int>m;
        int cnt=1;
        for(int i=0; i<p.size(); i++)
        {
            if(m.find(p[i])==m.end()) m[p[i]]=cnt;
            else m[p[i]]=max(m[p[i]],cnt);
            
            if(i+1<p.size() && isNext(p[i],p[i+1])) cnt++;
            else cnt=1;
        }
        
        int ans=0;
        for(auto k : m) ans+=k.second;
        return ans;
    }
};