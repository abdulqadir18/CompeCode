class Solution {
public:
    bool checkString(string s) {
        int a=0,b=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='a') a++;
            else b++;
            
            if(s[i]=='a' && b) return false;
        }
        return true;
    }
};