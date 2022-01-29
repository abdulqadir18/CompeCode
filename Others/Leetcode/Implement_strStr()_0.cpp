class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
        {
            return 0;
        }
        if(haystack.size()<needle.size())
        {
            return -1;
        }
        
        for(int i=0; i<haystack.size()-needle.size()+1; i++)
        {
            string check=haystack.substr(i,needle.size());
            if(check==needle)
            {
                return i;
            }
        }
        return -1;
    }
};