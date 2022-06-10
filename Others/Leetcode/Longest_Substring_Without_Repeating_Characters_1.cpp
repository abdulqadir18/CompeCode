class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=1;
        int i=0, j=0, n=s.size();
        if(n==0) return 0;
        unordered_set<char>m;
        while(i<n && j<n)
        {
            if(m.find(s[j])==m.end()){m.insert(s[j++]); ans=max(ans,j-i);}
            else m.erase(s[i++]); 
        }
        return ans;
    }
};