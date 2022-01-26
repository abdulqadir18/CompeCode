class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int no=count(nums.begin(),nums.end(),0);
        
        for(int i=0; i<nums.size(); i++)
        {
           if(nums[i]==0)
           {
               nums.erase(nums.begin()+i);
               i--;
           }
        }
        
        while(no--)
        {
            nums.push_back(0);
        }
    }
};