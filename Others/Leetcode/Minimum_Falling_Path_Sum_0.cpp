class Solution {
public:
    int recurse(vector<vector<int>> a,int i, int j)
    {
        if(j<0 || j>a.size()-1) return 1e9;
        if(i==0) return a[0][j];
        int s=a[i][j]+recurse(a,i-1,j);
        int ld=a[i][j]+recurse(a,i-1,j-1);
        int rd=a[i][j]+recurse(a,i-1,j+1);
        return min(s,min(ld,rd));
    }
    
    int minFallingPathSum(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        int ans=INT_MAX;
        for(int j=0; j<n; j++)
        {
            ans=min(ans,recurse(a,m-1,j));
        }
        return ans;
    }
};


