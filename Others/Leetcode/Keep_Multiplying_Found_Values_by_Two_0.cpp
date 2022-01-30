class Solution {
public:
    bool binarySearch(vector<int>a, int k)
    {
        int lo=0, hi=a.size()-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(a[mid]==k)
            {
                return true;
            }
            else if(a[mid]>k)
            {
                hi--;
            }
            else
            {
                lo++;
            }
        }
        return false;
    }
        
    int findFinalValue(vector<int>& nums, int original) {
        
        sort(nums.begin(),nums.end());
        while(binarySearch(nums,original))
        {
            original*=2;
        }
        return original;
    }
};