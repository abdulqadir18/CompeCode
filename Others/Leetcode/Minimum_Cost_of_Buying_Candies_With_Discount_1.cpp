class Solution {
public:
    int minimumCost(vector<int>& a) {
        int ans=0;
        int n=a.size();
        sort(a.rbegin(),a.rend());
        for(int i=0; i<n; i++)
        {
            if((i+1)%3!=0)
            {
                ans+=a[i];
            }
        }
        return ans;
    }
};