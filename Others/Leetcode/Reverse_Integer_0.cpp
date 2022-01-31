class Solution {
public:
    int reverse(int x) {
        string s=to_string(x);
        if(s[0]=='-')
        {
            s.erase(s.begin());
            s+="-";
        }
        string rev=string(s.rbegin(),s.rend());
        // cout<<rev<<"\n";
         long long a=stoll(rev);
        if(a<pow(-2,31) || a>=pow(2,31))
        {
            return 0;
        }
        x=a;
        return x;
    }
};