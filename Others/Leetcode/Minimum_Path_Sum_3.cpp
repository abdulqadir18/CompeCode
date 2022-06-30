class Solution {
public:
    
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>prev(n,20000);
        for(int i=0; i<m; i++)
        {
            vector<int>cur(n);
            for(int j=0; j<n; j++)
            {
                if(i==0 && j==0) cur[0]=grid[0][0];
                else
                {
                    int up=INT_MAX, left=INT_MAX;
                    if(i>0) up=grid[i][j]+prev[j];
                    if(j>0) left=grid[i][j]+cur[j-1];
                    cur[j]=min(left,up);
                }
            }
            prev=cur;
        }
        return prev[n-1];;
    }
};