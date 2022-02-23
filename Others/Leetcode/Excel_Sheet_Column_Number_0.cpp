class Solution {
public:
    int titleToNumber(string s) {
        long long int ans=0;
        long long int mul=1;
        for(int i=s.size()-1; i>=0; i--)
        {
            ans+=(mul*((s[i]-16)-'0'));
            mul*=26;
        }
        return ans;
    }
};