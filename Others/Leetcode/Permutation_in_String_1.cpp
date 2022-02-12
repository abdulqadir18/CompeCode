class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s2.size()<s1.size()) return false;
        vector<int>s1vec(27);
        for(int i=0; i<s1.size(); i++)
        {
            s1vec[s1[i]-'a']++;
        }
        for(int i=0; i<=s2.size()-s1.size(); i++)
        {
            vector<int>s2vec(27);
            for(int j=0; j<s1.size(); j++)
            {
                s2vec[s2[i+j]-'a']++;
            }
            if(s1vec==s2vec) return true;
        }
        return false;
    }
};