class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ans=0;
        string s=to_string(num);
        for(int i=0; i<=s.size()-k; i++)
        {
            string t=s.substr(i,k);
            int x=stoi(t);
            if(x && !(num%x)) ans++;
        }
        return ans;
    }
};