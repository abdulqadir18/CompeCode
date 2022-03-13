class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>v,ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==key) v.push_back(i);
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            int flag=0;
            for(int j=0; j<v.size(); j++)
            {
                if(abs(i-v[j])<=k) flag=1;
            }
            if(flag)  ans.push_back(i);
        }
        return ans;
    }
};