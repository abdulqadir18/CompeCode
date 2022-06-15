class Solution {
public:
    void backtrack(int k,int n,int ptr, int sum, vector<int>temp, vector<vector<int>>& ans)
    {
        if(!k)
        {
            if(sum==n) ans.push_back(temp);
            return;
        }
        if(sum>=n || ptr>9) return;
        
        for(int i=ptr; i<=9; i++)
        {
            temp.push_back(i);
            sum+=i;
            backtrack(k-1,n,i+1,sum,temp,ans);
            temp.pop_back();
            sum-=i;
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        int sum=0;
        backtrack(k,n,1,sum,temp,ans);
        return ans;
    }
};