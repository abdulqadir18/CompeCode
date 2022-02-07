class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& a) {
        vector<int>even;
        vector<int>odd;
        for(int i=0; i<a.size(); i++)
        {
            if(i%2==0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
        int e=0,o=0;
        for(int i=0; i<a.size(); i++)
        {
            if(i%2==0)
            {
                a[i]=even[e];
                e++;
            }
            else
            {
                a[i]=odd[o];
                o++;
            }
            // cout<<a[i]<<" ";
        }
        return a;
    }
};