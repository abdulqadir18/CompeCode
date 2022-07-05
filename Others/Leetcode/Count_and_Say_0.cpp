class Solution {
public:
    string count(string s)
    {
        string x="";
        char cur=s[0];
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(cur!=s[i])
            {
                x+=to_string(cnt);
                x+=cur;
                cnt=1;
                cur=s[i];
            }
            else cnt++;
        }
        x+=to_string(cnt);
        x+=cur;
        
        return x;
    }
    
    string countAndSay(int n) {
        string s="1";
        n--;
        while(n--) s=count(s);
        return s;
    }
};