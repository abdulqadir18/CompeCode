class Solution {
public:
    int minimumCost(vector<int>& a) {
        int ans=0;
        int n=a.size();
        sort(a.begin(),a.end());
        if(n%3==0)
        {
            for(int i=n-1; i>=0; i-=3)
            {
                ans+=(a[i]+a[i-1]);
            }
        }
        else if(n%3==1)
        {
            for(int i=n-1; i>=1; i-=3)
            {
                ans+=(a[i]+a[i-1]);
            }
            ans+=a[0];
        }
        else
        {
            for(int i=n-1; i>=2; i-=3)
            {
                ans+=(a[i]+a[i-1]);
            }
            ans+=(a[0]+a[1]);
        }
        return ans;
    }
};