class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int n=a.size();
        int totalSum=0;
        for(int i=0; i<n; i++) totalSum+=a[i];
        int ans=0,sum=0;
        //cout<<"\n";
        for(int i=0; i<n-k; i++) sum+=a[i];
        ans=max(ans,totalSum-sum);
        for(int i=0; i<k; i++)
        {
            sum-=a[i];
            sum+=a[n-k+i];
            ans=max(ans,totalSum-sum);
        }
        return ans;
    }
};