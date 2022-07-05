class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        
        int ans=0;
        unordered_map<int,int>m;
        for(auto i : nums)
        {
            if(m.find(i)==m.end())
            {
                //length of seq if exist in left
                int left=(m.find(i-1)!=m.end())?m[i-1]:0;
                //length of seq if exist in right
                int right=(m.find(i+1)!=m.end())?m[i+1]:0;
                //total length of seq including current element
                int sum=left+right+1;
                //storing it in map
                m[i]=sum;
                
                //updating ans
                ans=max(ans,sum);
                
                //extend boundary by updating ends in map
                m[i-left]=sum;
                m[i+right]=sum;
            }
            
            else continue; //duplicates
        }
        
        return ans;
    }
};