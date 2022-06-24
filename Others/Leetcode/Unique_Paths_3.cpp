class Solution {
public:
    
    int uniquePaths(int m, int n) {
        vector<int>prev(n,0);
        for(int i=0; i<m; i++)
        {
            vector<int>cur(n,0);
            if(i==0) cur[0]=1;
            for(int j=0; j<n; j++)
            {
                if(i==0 && j==0) continue;
                int up=0, left=0;
                up=prev[j];
                if(j>0) left=cur[j-1];
                cur[j]=up+left;
            }
            prev=cur;
        }
        return prev[n-1];
    }
};