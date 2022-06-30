class Solution {
public:
    
    int minimumTotal(vector<vector<int>>& a) {
        vector<int>minPath(a.back());
        for(int j=a.size()-2; j>=0; j--)
        {
            for(int i=0; i<=j; i++)
            {
                minPath[i]= min(minPath[i],minPath[i+1])+a[j][i];
            }
        }
        return minPath[0];
    }
};