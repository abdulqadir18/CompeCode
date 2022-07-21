class Solution {
public:
    // Function to return gcd of a and b
    int gcd(int a, int b)
    {
      if (a == 0)
        return b;
      return gcd(b % a, a);
    }

    // Function to find gcd of array of
    // numbers
    int findGCD(vector<int>arr, int n)
    {
      int result = arr[0];
      for (int i = 1; i < n; i++)
      {
        result = gcd(arr[i], result);

        if(result == 1)
        {
        return 1;
        }
      }
      return result;
    }
    
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int hcf=findGCD(numsDivide,numsDivide.size());
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(hcf%nums[i]==0) return ans;
            ans++;
        }
        return -1;
    }
};