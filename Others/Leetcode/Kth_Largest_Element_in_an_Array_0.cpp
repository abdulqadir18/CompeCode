class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int i=nums.size()-1;
        while(k--)
        {
            ans=nums[i--];
        }
        return ans;
    }
};