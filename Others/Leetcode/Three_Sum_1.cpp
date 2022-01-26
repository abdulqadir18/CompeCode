class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> ans;
        
        if(a.size()<3)
        {
            return ans;
        }
        
        sort(a.begin(),a.end());
        for(int i=0; i<a.size()-2; i++)
        {
            int l=i+1, r=a.size()-1;
            while(l<r)
            {
                int sum=a[l]+a[r]+a[i];
                if(sum==0)
                {
                    vector<int>v={a[i],a[l],a[r]};
                    ans.push_back(v);
                    l++;
                    while(l<r && a[l]==v[1])
                    {
                        l++;
                    }
                    while(l<r && a[r]==v[2])
                    {
                        r--;
                    }
                }
                else if(sum>0)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
            
            while(i+1<a.size()-2 && a[i]==a[i+1])
            {
                i++;
            }
        }
        
        return ans;
    }
};