class Solution {
public:
    int f(vector<int>&a, int i, int sum)
    {
        if(i>a.size()-1) return sum;
        sum+=a[i];
        int s1=INT_MAX, s2=INT_MAX;
        s1=f(a,i+1,sum);
        s2=f(a,i+2,sum);
        return min(s1,s2);
    }
    
    int minCostClimbingStairs(vector<int>& a) {
        return min(f(a,0,0),f(a,1,0));
    }
};