class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int n=nums.size()-1;
        int l=0, r=nums.size()-1;
        
        while(l<=r)
        {
            if(nums[l]*nums[l]>=nums[r]*nums[r])
            {
                ans[n--]=nums[l]*nums[l];
                l++;
            }
            else
            {
                ans[n--]=nums[r]*nums[r];
                r--;
            }
        }
        return ans;
    }
};