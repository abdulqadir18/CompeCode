class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        int cum=0;
        unordered_map<int,int>m;
        m[0]++;
        
        for(int i=0; i<nums.size(); i++)
        {
            cum+=nums[i];
            int rem=cum%k;
            if(rem<0)rem+=k;
            
            if(m.find(rem)!=m.end()) ans+=m[rem];
            
            m[rem]++;
        }
        return ans;
    }
};