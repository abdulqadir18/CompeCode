class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int truck) {
        vector<pair<int,int>>a;
        for(int i=0; i<box.size(); i++) a.push_back(make_pair(box[i][1],box[i][0]));
        sort(a.rbegin(),a.rend());
        
        int ans=0;
        int i=0;
        while(i<box.size() && truck>0)
        {
            if(a[i].second>=truck)
            {
                ans+=(truck*a[i].first);
                truck=0;
            }
            else
            {
                ans+=(a[i].second*a[i].first);
                truck-=a[i].second;
                i++;
            }
        }
        return ans;
    }
};