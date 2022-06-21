class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int>p;
        int used=0;
        for(int i=0; i<h.size()-1; i++)
        {
            int diff=h[i+1]-h[i];
            if(diff>0)
            {
                if(used+diff<=b)
                {
                    used+=diff;
                    p.push(diff);
                }
                else if(l>0)
                {
                    if(!p.empty() && p.top()>diff)
                    {
                        used=used-p.top()+diff;
                        p.pop();
                        p.push(diff);
                    }
                    l--;//else case
                }
                else return i;
            }
        }
        return h.size()-1;
    }
};