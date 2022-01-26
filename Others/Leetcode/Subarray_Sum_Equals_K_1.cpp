class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>m;
        m[0]++; //consider case sum=nums[i]
        int cnt=0, cum=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            cum+=nums[i];
            cnt+=m[cum-k];
            m[cum]++;
        }
        return cnt;
        
    }
};