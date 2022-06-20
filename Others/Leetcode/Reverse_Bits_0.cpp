class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long long int x = (long long int)  n;
        string s= bitset<32> (x).to_string();
        cout<<s;
        long long int ans=0;
        for(int i=31; i>=0; i--)
        {
            if(s[i]=='1') ans+=(long long int)(1<<i);
        }
        return (uint32_t)ans;
    }
};