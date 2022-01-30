class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& a) {
        map<int,vector<int>>m;
        //for 0 case
        int mx=INT_MIN;
        int cnt=count(a.begin(),a.end(),1);
        m[cnt].push_back(0);
        mx=max(mx,cnt);
        //for general
        for(int i=1; i<a.size(); i++)
        {
            // cout<<cnt<<" ";
            cnt=count(a.begin(),a.begin()+i,0)+count(a.begin()+i,a.end(),1);
            m[cnt].push_back(i);
            mx=max(mx,cnt);
        }
        //for n case
        // cout<<cnt<<" ";
        cnt=count(a.begin(),a.end(),0);
        m[cnt].push_back(a.size());
        mx=max(mx,cnt);
        // cout<<cnt<<"\n";
        return m[mx];
    }
};