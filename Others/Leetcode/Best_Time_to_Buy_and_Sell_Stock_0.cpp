class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        vector<int>profit;
        profit.push_back(0);
        
        int min=INT_MAX, max=INT_MIN;
        for(int i=0; i<a.size(); i++)
        {
            if(min>a[i])
            {
               min=a[i];
               max=-1;
               continue;
            }
            if(max<a[i])
            {
                max=a[i];
                profit.push_back(max-min);
            }
        }
        sort(profit.begin(), profit.end());
        return profit[profit.size()-1];
        
    }
};