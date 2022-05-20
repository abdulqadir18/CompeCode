class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int n=a.size();
        int i=0, j=n-k;
        int total=accumulate(a.begin()+j,a.end(),0);
        int ans=total;
        while(k--) ans=max(ans,total+=a[i++]-a[j++]);
        return ans;
    }
};