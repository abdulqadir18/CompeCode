class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n)
        {
            if(n%2==1)ans++;
            n/=2;
        }
        return ans;
    }
};