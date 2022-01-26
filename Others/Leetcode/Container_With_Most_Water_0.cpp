class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0;
        for(int i=0; i<h.size(); i++)
        {
            for(int j=i+1; j<h.size(); j++)
            {
                ans=max(ans,(j-i)*min(h[i],h[j]));
            }
        }
        return ans;
    }
};