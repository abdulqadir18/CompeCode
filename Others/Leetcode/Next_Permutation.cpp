class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int flag=0, n=a.size();
        if(n==1)
        {
            flag=1;
        }
        
        else
        {
            for(int i=n-1; i>0; i--)
            {
                if(a[i]>a[i-1])
                {
                    // swap(a[i-1],a[mini]);
                    sort(a.begin()+i, a.end());
                    for(int j=i; j<n; j++)
                    {
                        if(a[j]>a[i-1])
                        {
                            swap(a[i-1],a[j]);
                            flag=1;
                            break;
                        }
                    }
                    flag=1;
                    break;
                }
            }
        }
        
        if(flag==0)
        {
            sort(a.begin(),a.end());
        }
    }
};