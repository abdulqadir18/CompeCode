class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0; i<intervals.size(); i++)
        {
            if(ans.size()==0)
            {
                ans.push_back(intervals[i]);
            }
            else if(ans.back()[1]>=intervals[i][0])
            {
                ans.back()[1]=max(intervals[i][1],ans.back()[1]);
            }
            else
            {
                ans.push_back(intervals[i]);
            }
        }
        
        return ans;
    }
};