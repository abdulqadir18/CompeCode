class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=1;
        if(s.size()==0) return 0;
        for(int i=0; i<s.size(); i++)
        {
            unordered_map<char,int>m;
            m[s[i]]++;
            for(int j=i+1; j<s.size(); j++)
            {
                if(m.find(s[j])!=m.end()) break;
                ans=max(ans,j-i+1);
                m[s[j]]++;
            }
        }
        return ans;
    }
};