class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++)
        {
            int n=nums[i];
            int x=0;
            while(n)
            {
                x+=(n%10);
                n/=10;
            }
            m[nums[i]]=x;
        }
        
        sort(nums.begin(),nums.end());
        
        int ans=-1;
        unordered_map<int,int>pair;
        for(int i=0; i<nums.size(); i++)
        {
            if(pair.find(m[nums[i]])!=pair.end())
            {
                ans=max(ans,pair[m[nums[i]]]+nums[i]);
            }
            pair[m[nums[i]]]=nums[i];
        }
        return ans;
    }
};