class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size()) return false;
        unordered_set<string>m;
        for(int i=0; i<=s.size()-k; i++)
        {
            m.insert(s.substr(i,k));
        }
        if(m.size()==(1<<k)) return true;
        return false;
    }
};