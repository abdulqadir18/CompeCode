class Solution {
public:
    int largestInteger(int num) {
        string a= to_string(num);
        for(int i=0; i<a.size()-1; i++)
        {
            for(int j=i+1; j<a.size(); j++)
            {
                if((a[i]%2==0 && a[j]%2==0) || (a[i]%2!=0 && a[j]%2!=0))
                {
                    if(a[j]>a[i]) swap(a[i],a[j]);
                }
            }
        }
        return stoi(a);
    }
};