class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        if(nums.empty()) return ans;
        int lo=0, hi=nums.size()-1;
        while(lo<hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]<target) lo=mid+1;
            else hi=mid;
        }
        if(target==nums[lo]) ans[0]=lo;
        else return ans;
        
        
        hi=nums.size()-1;
        while(lo<hi)
        {
            int mid=(lo+hi)/2+1;
            if(nums[mid]>target) hi=mid-1;
            else lo=mid;
        }
        ans[1]=hi;
        
        return ans;
    }
};