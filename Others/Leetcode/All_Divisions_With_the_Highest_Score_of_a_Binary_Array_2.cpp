class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& a) {
        int n=a.size(), mx=0;
        vector<int>sum(n+1,0), ans;
        
        for(int i=0; i<n; i++)
        {
            sum[i+1]=sum[i]+a[i];
        }
        
        for(int i=0; i<=n; i++)
        {
            int cnt=(i-sum[i])+(sum[n]-sum[i]);
            if(cnt>mx)
            {
                ans={i};
                mx=cnt;
            }
            else if(cnt==mx)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};