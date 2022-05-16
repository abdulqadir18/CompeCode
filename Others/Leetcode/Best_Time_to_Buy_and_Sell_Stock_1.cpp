class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0], sell=prices[0];
        int ans=0;
        for(int i=0; i<prices.size(); i++)
        {
            ans=max(ans,sell-buy);
            if(buy>prices[i])
            {
                buy=prices[i];
                sell=prices[i];
            }
            else if(prices[i]>sell)
            {
                sell=prices[i];
            }
        }
        ans=max(ans,sell-buy);
        return ans;
    }
};