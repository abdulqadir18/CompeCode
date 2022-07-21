class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++) m[nums[i]]++;
        
        vector<int>ans(2);
        for(auto p : m)
        {
            if(p.second%2) {ans[0]+=(p.second-1)/2; ans[1]++;}
            else ans[0]+=p.second/2;
        }
        return ans;
    }
};