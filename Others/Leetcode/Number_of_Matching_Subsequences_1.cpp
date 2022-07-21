class Solution {
public:
    bool isSub(string a, string b)
    {
        int m=a.size(), n=b.size();
        int i=0, j=0;
        while(i<m && j<n)
        {
            if(a[i]==b[j]) {i++; j++;}
            else i++;
        }
        return j==n;
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        unordered_map<string,int>m;
        for(int i=0; i<words.size(); i++) m[words[i]]++;
        for(auto p : m)
        {
            if(isSub(s,p.first)) ans+=p.second;
        }
        return ans;
    }
};