class Solution {
public:
    int recurse(int i, int j)
    {
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        int up=recurse(i-1,j);
        int left=recurse(i,j-1);
        return up+left;
    }
    
    int uniquePaths(int m, int n) {
        return recurse(m-1,n-1);
    }
};