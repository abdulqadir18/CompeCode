class Solution {
public:
    int minMoves(vector<int>& nums) {
        map<int,int>m;
        int mn=INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
            mn=min(mn,nums[i]);
            m[nums[i]]++;
        }
        
        int ans=0;
        for(auto p : m)
        {
            ans+=((p.first-mn)*p.second);
        }
        return ans;
    }
};