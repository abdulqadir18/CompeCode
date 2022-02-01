class Solution {
public:
    int lengthOfLastWord(string s) {
        int tail=s.size()-1, ans=0;
        while(tail>=0 && s[tail]==' ')
        {
            tail--;
        }
        while(tail>=0 && s[tail]!=' ')
        {
            tail--;
            ans++;
        }
        return ans;
    }
};