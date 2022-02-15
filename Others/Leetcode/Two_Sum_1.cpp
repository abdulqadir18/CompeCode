class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>ans(2);
        m[nums[0]]=0;
        for(int i=1; i<nums.size(); i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                // cout<<i<<"hello\n";
                ans[0]=m[target-nums[i]];
                ans[1]=i;
                return ans;
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};