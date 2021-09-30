#include <iostream>
#include <numeric>
using namespace std;
int main()
{
  long t;
  cin>>t;
  while(t--)
  {
    long n, k,i;
    cin>>n>>k;
    long *a, *s;
    a= new long[n];
    for(i=0; i<n; i++)
      cin>>a[i];
    long l;
    s= new long[l];

    while(k--)
    {
      l=0;
      for(i=0; i<n; i++)
      {
       if(a[i]>0)
       {
         l++;
         s[l-1]=i;
       }
      }

      for(i=0; i<l; i++)
      {
        if(s[i]==0){
          a[1]++;
          a[n-1]++;
        }
        else if(s[i]==n-1){
          a[0]++;
          a[n-2]++;
        }
        else{
          a[s[i]+1]++;
          a[s[i]-1]++;
        }
      }
    }
    cout<<accumulate(a, a+n, 0)<<"\n";

  }
  return 0;
}