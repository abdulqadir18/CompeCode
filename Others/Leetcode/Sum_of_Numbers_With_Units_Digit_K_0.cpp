class Solution {
public:
    void backtrack(int num, int k, int cnt, int sum, int &ans)
    {
        if(sum>num) return;
        if(sum==num) {ans=min(cnt,ans); return;}
        
        for(int i=0; i<=num; i+=10)
        {
            if(!k && i==0) continue;
            int x=i+k;
            sum+=x;
            cnt++;
            backtrack(num,k,cnt,sum,ans);
            sum-=x;
            cnt--;
            
        }
    }
    
    int minimumNumbers(int num, int k) {
        int ans=INT_MAX;
        if(num==0) return 0;
        backtrack(num,k,0,0, ans);
        if(ans==INT_MAX) return -1;
        return ans;
    }
};