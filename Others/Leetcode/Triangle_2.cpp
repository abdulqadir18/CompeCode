class Solution {
public:
    int minimumTotal(vector<vector<int>>& a) {
        int n=a.size();
        vector<int>next(n);
        for(int j=0; j<n; j++) next[j]=a[n-1][j];
        
        for(int i=n-2; i>=0; i--)
        {
            vector<int>cur(i+1);
            for(int j=i; j>=0; j--)
            {
                int down=a[i][j]+next[j];
                int diag=a[i][j]+next[j+1];
                cur[j]=min(down,diag);
            }
            next=cur;
        }
        
        return next[0];
    }
};