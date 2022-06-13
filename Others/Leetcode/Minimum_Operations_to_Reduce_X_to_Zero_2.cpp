class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target=accumulate(nums.begin(),nums.end(),-x);
        if(target<0) return -1;
        if(target==0) return nums.size();
        
        int ans=-1;
        int l=0, r=0;
        int cur=0;
        while(r<nums.size())
        {
            cur+=nums[r];
            while(cur>=target)
            {
                if(cur==target) ans=max(ans,r-l+1);
                cur-=nums[l];
                l++;
            }
            r++;
        }
        
        return (ans==-1?-1:nums.size()-ans);
    }
};