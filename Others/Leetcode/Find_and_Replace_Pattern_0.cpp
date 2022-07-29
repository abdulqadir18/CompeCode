class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        vector<string>ans;
        for(int i=0; i<words.size(); i++)
        {
            unordered_map<char,set<char>>m1,m2;
            bool flag=true;
            for(int j=0; j<words[i].size(); j++)
            {
                m1[p[j]].insert(words[i][j]);
                m2[words[i][j]].insert(p[j]);
                if(m1[p[j]].size()>1 || m2[words[i][j]].size()>1) {flag=false; break;}
            }
            if(flag) ans.push_back(words[i]);
        }
        return ans;
    }
};