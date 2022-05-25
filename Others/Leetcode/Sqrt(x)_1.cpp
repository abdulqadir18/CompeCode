class Solution {
public:
    int mySqrt(int x) {
        long lo=1, hi=x;
        long ans=0;
        while(lo<=hi)
        {
            long mid=lo+(hi-lo)/2;
            if(mid<=x/mid) {lo=mid+1; ans=mid;}
            else hi=mid-1;
        }
        return ans;
    }
};