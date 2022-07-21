class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& a, int target) {
        int ans=0;
        
        //cumulating matrix sum
        int m=a.size(), n=a[0].size();
        for(int i=0; i<m; i++)
        {
            for(int j=1; j<n; j++)
            {
                a[i][j]+=a[i][j-1];
            }
        }
        
        unordered_map<int,int>psum;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                psum={{0,1}}; //this clears map and also add 0 for base condition
                int sum=0;
                for(int k=0; k<m; k++)
                {
                    sum+=a[k][j]-(i>0?a[k][i-1]:0);
                    ans+=(psum.find(sum-target)!=psum.end()?psum[sum-target]:0);
                    psum[sum]++;
                }
            }
        }
        
        return ans;
    }
};