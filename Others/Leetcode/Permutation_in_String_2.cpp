class Solution {
public:
    
    bool checkInclusion(string s1, string s2) {
        
        if(s2.size()<s1.size()) return false;
        vector<int>s1vec(27),s2vec(27);
        for(int i=0; i<s1.size(); i++)
        {
            s1vec[s1[i]-'a']++;
        }
        for(int i=0; i<s2.size(); i++)
        {
            s2vec[s2[i]-'a']++;
            if(i>=s1.size()) s2vec[s2[i-s1.size()]-'a']--;
            if(s1vec==s2vec) return true;
        }
        return false;
    }
};