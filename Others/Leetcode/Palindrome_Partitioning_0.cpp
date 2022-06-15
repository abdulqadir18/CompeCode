class Solution {
public:
    void backtrack(vector<vector<string>>& ans, vector<string> temp, string s, int ptr)
    {
        if(ptr==s.size())
        {
            bool flag=true;
            for(auto a : temp)
            {
                string b=a;
                reverse(b.begin(),b.end());
                if(a!=b) flag=false;
            }
            if(flag) ans.push_back(temp);
            return;
        }
        string t=temp.back();
        
        string r=t;
        reverse(r.begin(),r.end());
        
        temp.back()+=s[ptr];
        backtrack(ans,temp,s,ptr+1);
        temp.back()=t;
        
        string t2="";
        t2+=s[ptr];
        temp.push_back(t2);
        backtrack(ans,temp,s,ptr+1);
        
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string>temp;
        string t="";
        t+=s[0];
        temp.push_back(t);
        backtrack(ans,temp,s,1);
        return ans;
    }
};