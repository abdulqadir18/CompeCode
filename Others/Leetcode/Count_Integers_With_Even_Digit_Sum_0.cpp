class Solution {
public:
    int countEven(int num) {
        int ans=0;
        for(int i=2; i<=num; i++)
        {
            int x=i;
            int sum=0;
            while(x)
            {
                sum+=(x%10);
                x/=10;
            }
            if(sum%2==0) ans++;
           
        }
        // cout<<"\n";
        return ans;
    }
};