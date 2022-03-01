class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0; i<=n; i++)
        {
            int cnt=0;
            int x=i;
            while(x)
            {
                x&=(x-1);
                cnt++;
            }
            ans[i]=cnt;
        }
        return ans;
    }
};