class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>cum(nums.size()+1);
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            cum[i+1]=sum;
        }
        
        int ans=INT_MIN;
        for(int i=0; i<cum.size(); i++)
        {
            for(int j=0; j<cum.size(); j++)
            {
                if(i!=j)ans=max(ans, cum[j]-cum[i]);
            }
        }
        return ans;
    }
};