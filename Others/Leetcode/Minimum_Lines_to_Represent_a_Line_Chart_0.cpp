class Solution {
public:
    int minimumLines(vector<vector<int>>& s) {
        if(s.size()==1) return 0;
        int ans=0;
        long double cur=INT_MAX;
        sort(s.begin(),s.end());
        //cout<<s.size()<<"\n";
        for(int i=1; i<s.size(); i++)
        {
            long double now=(long double)(s[i][1]-s[i-1][1])/(long double)(s[i][0]-s[i-1][0]);
            //cout<<now<<" ";
            if(now!=cur)
            {
                ans++;
                cur=now;
            }
        }
        //cout<<"\n";
        return ans;
    }
};