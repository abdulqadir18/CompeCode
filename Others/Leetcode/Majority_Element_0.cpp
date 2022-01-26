class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int ans=INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>m[ans])
            {
                ans=nums[i];
            }
        }
        
        return ans;
    }
};