class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        map<int,int>m;
        int mn=INT_MAX;
        for(int i=0; i<nums.size(); i++) {m[nums[i]]++; mn=min(mn,nums[i]);}
        
        int ans=0, cnt=1;
        int prev=mn;
        for(auto p : m)
        {
            if(p.first-prev!=1)
            {
                ans=max(ans,cnt);
                cnt=1;
            }
            else cnt++;
            prev=p.first;
        }
        ans=max(ans,cnt);
        return ans;
    }
};