class Solution {
public:
    int mySqrt(int x) {
        long lo=1, hi=x, mid;
        while(lo<=hi)
        {
            mid=lo+(hi-lo)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x) hi=mid-1;
            else lo=mid+1;
        }
        return hi;
    }
};