class Solution {
public:
    string simplifyPath(string s) {
        stack<int>t;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='/')
            {
                if(t.empty()) t.push('/');
                else if(!t.empty() && t.top()!='/' && i!=s.size()) t.push('/'); 
            }
            else if(s[i]=='.')
            {
                int cnt=0;
                string cmp="";
                while(i<s.size() && s[i]!='/')
                {
                    cmp+=s[i];
                    cnt++;
                    i++;
                }
                
                if(cmp==".")
                {
                    if(t.top()=='/') continue;
                    else t.push('.');
                }
                else if(cmp=="..")
                {
                    if(t.top()=='/'){t.pop();
                    while(!t.empty() && t.top()!='/') t.pop();}
                    else {t.push('.'); t.push('.');}
                }
                else if(cnt>2)
                {
                    for(int j=0; j<cnt; j++) t.push(cmp[j]);
                }
                if(t.empty() || t.top()!='/')t.push('/');
                // else if(cnt==1) continue;
            }
            else t.push(s[i]);
        }
        
        if(!t.empty() && t.top()=='/') t.pop();
        string ans="";
        while(!t.empty())
        {
            ans+=t.top();
            t.pop();
        }
        reverse(ans.begin(),ans.end());
        
        if(ans.size()<1) return "/";
        return ans;
    }
};