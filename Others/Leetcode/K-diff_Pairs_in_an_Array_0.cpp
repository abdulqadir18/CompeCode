class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        int cnt=0;
        // for(int i=0; i<nums.size(); i++)
        // {
        //     if((!k && m.find(nums[i])!=m.end()) || (k && m.find(nums[i]+k)!=m.end()))
        //     {
        //         cnt++;
        //     }
        // }
        for (auto p : m)
        {
            if ((!k && p.second > 1)
                || (k && m.find(p.first + k) != m.end())) ++cnt;
        }
        return cnt;
    }
};