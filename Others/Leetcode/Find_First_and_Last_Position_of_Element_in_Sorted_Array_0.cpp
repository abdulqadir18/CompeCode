class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int lo=0, hi=nums.size();
        while(lo<hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]==target)
            {
                cout<<mid<<" hey\n";
                int i=mid+1;
                while(i<nums.size() && nums[i]==nums[mid]) i++;
                ans[1]=i-1;
                i=mid-1;
                while(i>=0 && nums[i]==nums[mid]) i--;
                ans[0]=i+1;
                return ans;
            }
            else if(nums[mid]>target) hi=mid;
            else lo=mid+1;
        }
        return ans;
    }
};