int Solution::solve(vector<int> &A) {
    int n=A.size();
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0; i<n; i++)
    {
        mx=max(mx,A[i]);
        mn=min(mn,A[i]);

    }
    return mx+mn;
}