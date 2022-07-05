class Solution {
public:
    int maxArea(int h, int v, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        //adding horizontal edges
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        //adding vertical edges
        verticalCuts.push_back(0);
        verticalCuts.push_back(v);
        
        //sorting
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        //finding max diff horizontally
        int maxH=INT_MIN;
        for(int i=1; i<horizontalCuts.size(); i++)
        {
            maxH=max(maxH,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        //finding max diff vertically
        int maxV=INT_MIN;
        for(int i=1; i<verticalCuts.size(); i++)
        {
            maxV=max(maxV,verticalCuts[i]-verticalCuts[i-1]);
        }
        
        //ans is the portion between max gap
        return ((long long)maxH*(long long)maxV)%1000000007;
    }
};