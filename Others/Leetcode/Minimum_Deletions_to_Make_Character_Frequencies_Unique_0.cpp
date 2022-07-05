class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>f;
        for(int i=0; i<s.size(); i++) f[s[i]]++;
        unordered_map<int,char>ff;
        for(auto p : f) {ff[p.second]=p.first; }
        
        //cout<<"\n";
        int ans=0;
        for(auto p : f)
        {
            if(p.first!=ff[p.second])
            {
                while(p.second>0 && ff.find(p.second)!=ff.end()) {ans++; p.second--;}
                //cout<<p.second<<" "<<p.first<<" ";
                if(p.second) ff[p.second]=p.first;
            }
        }
        return ans;
    }
};