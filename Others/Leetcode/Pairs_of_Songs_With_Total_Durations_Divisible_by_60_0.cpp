class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans=0;
        for(int i=0; i<time.size()-1; i++)
        {
            for(int j=i+1; j<time.size(); j++)
            {
                if((time[i]+time[j])%60==0) ans++;
            }
        }
        return ans;
    }
};