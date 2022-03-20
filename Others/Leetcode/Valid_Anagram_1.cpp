class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;
            m[t[i]]--;
        }
        
        for(auto p:m)
        {
            if(p.second) return false;
        }
        return true;
    }
};