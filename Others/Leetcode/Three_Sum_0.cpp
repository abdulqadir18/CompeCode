class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        set<vector<int>> cur;
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
                    cur.insert(v);
                    l++;
                    // while(l<r && a[l])
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
        }
        vector<vector<int>> ans2(cur.begin(),cur.end());
        return ans2;
    }
};