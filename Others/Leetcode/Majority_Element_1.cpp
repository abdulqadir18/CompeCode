class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        sort(a.begin(),a.end());
        int cnt=0;
        int max=INT_MIN;
        int ans;
        int cur=a[0];
        for(int i=0; i<a.size(); i++)
        {
            if(cur!=a[i])
            {
                if(cnt>max)
                {
                    max=cnt;
                    ans=a[i-1];
                }
                cnt=1;
                cur=a[i];
            }
            else
            {
                cnt++;
            }
        }
        if(cnt>max)
        {
            ans=a[a.size()-1];
        }
        
        return ans;
    }
};