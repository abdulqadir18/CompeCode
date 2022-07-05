class Solution {
public:
    
    bool canPartition(vector<int>& nums) {
        if(nums.size()<=1) return false;
        
        int totalSum=0;
        for(int i=0; i<nums.size(); i++) totalSum+=nums[i];
        if(totalSum%2) return false;
        
        int k=totalSum/2;
        vector<bool>prev(k+1,false);
        
        //base case
        if(nums[0]<=k+1)prev[nums[0]]=true;
        
        //main loop
        for(int i=1; i<nums.size(); i++)
        {
            vector<bool>cur(k+1,false);
            cur[0]=true;
            for(int target=1; target<=k; target++)
            {
                bool notTake=prev[target];
                bool take=false;
                if(target>=nums[i]) take=prev[target-nums[i]];
                cur[target]=(take||notTake);
                //cout<<i<<":"<<target<<" ";
            }
            prev=cur;
        }
        //cout<<"\n";
        return prev[k];
    }
};