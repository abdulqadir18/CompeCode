class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0, hi=nums.size()-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                hi--;
            }
            else
            {
                lo++;
            }
        }
        return lo;
    }
};