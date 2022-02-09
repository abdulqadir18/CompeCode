class Solution {
public:
    int addDigits(int num) {
        if(num/10==0) return num;
        
        while(num/10!=0)
        {
            int x=num;
            int n=0;
            while(x!=0)
            {
                n+=(x%10);
                x/=10;
            }
            num=n;
        }
        return num;
    }
};