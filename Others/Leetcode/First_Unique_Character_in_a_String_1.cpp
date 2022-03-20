class Solution {
public:
    int firstUniqChar(string s) {
        map<char,pair<int,int>>m;
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]].first++;
            m[s[i]].second=i;
            
        }
        
        int ans=s.size();
        for(auto& [c,p] : m )
        {
            if(p.first==1) ans=min(ans, p.second);
        }
        
        return ans==s.size() ? -1 : ans;
    }
};