class Solution {
public:
    bool backspaceCompare(string p, string q) {
        int k1=0;
        for(int i=0; i<p.size(); i++)
        {
            if(p[i]=='#')
            {
                if(k1) k1--;
            }
            else
            {
                p[k1]=p[i];
                k1++;
            }
        }
        int k2=0;
        for(int i=0; i<q.size(); i++)
        {
            if(q[i]=='#')
            {
                if(k2) k2--;
            }
            else
            {
                q[k2]=q[i];
                k2++;
            }
        }
        
        if(k1!=k2) return false;
        while(k1-- && k2--)
        {
            if(p[k1]!=q[k2]) return false;
        }
        return true;
    }
};