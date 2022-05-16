class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int cum=0;
        unordered_map<int,int>m;
        m[0]=-1;
        
        for(int i=0; i<nums.size(); i++)
        {
            cum+=nums[i];
            cum=cum%k;
            if(m.find(cum)!=m.end()) 
            {
                if(i-m[cum]>1) return true;
            }
            else m[cum]=i;
        }
        return false;
    }
};