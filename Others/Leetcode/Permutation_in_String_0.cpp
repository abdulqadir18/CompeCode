class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s2.size()<s1.size()) return false;
        sort(s1.begin(),s1.end());
        for(int i=0; i<=s2.size()-s1.size(); i++)
        {
            string cmp=s2.substr(i,s1.size());
            sort(cmp.begin(),cmp.end());
            if(cmp==s1) return true;
        }
        return false;
    }
};