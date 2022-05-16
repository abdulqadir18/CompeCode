class Solution {
public:
    int largestCombination(vector<int>& a) {
        vector<string>s(a.size());
        // int n=0;
        for(int i=0; i<a.size(); i++)
        {
            // while(a[i])
            // {
            //     s[i]+=to_string(a[i]&1);
            //     a[i]>>=1;
            // }
            s[i] = std::bitset<32>(a[i]).to_string(); 
            // if(s[i].size()>n) n=s[i].size();
            cout<<s[i]<<" ";
        }
        cout<<"\n";
        
        int ans=1;
        for(int i=0; i<32; i++)
        {
            int cnt=0;
            for(int j=0; j<a.size(); j++)
            {
                if(s[j][i]=='1') cnt++;
            }
            ans=max(ans,cnt);
        }
        
        return ans;
    }
};