class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int cur=0, prev=0;
        for(int i=0; i<bank.size(); i++)
        {
            cur=count(bank[i].begin(),bank[i].end(),'1');
            ans+=(cur*prev);
            if(cur) prev=cur;
        }
        return ans;
    }
};