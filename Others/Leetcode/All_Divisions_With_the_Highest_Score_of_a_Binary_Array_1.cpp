class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& a) {
        int n=a.size(), mx=0;
        vector<int>sum(n+1,0), ans;
        int zero=0, one=count(a.begin(),a.end(),1);
        for(int i=0; i<=n; i++)
        {
            int cnt=zero+one;   
            if(cnt>mx)
            {
                ans={i};
                mx=cnt;
            }
            else if(cnt==mx)
            {
                ans.push_back(i);
            }
            
            if(i<n)
            {
                zero+=(a[i]==0);
                one-=(a[i]==1);
            }
        }
        
        return ans;
    }
};