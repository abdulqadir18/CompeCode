#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long t; 
cin>>t;
while(t--)
{
  long n;
  cin>>n;
  long k=2*n;
  long *a= new long(k);
  long i,cnt=0;
  for(i=0; i<k; i++)
    a[i]=i;

  while(next_permutation(a, a+k))
  {
    int flag=0;
    for(i=0;i<k-1;i++)
    {
      if(a[i]<a[i+1])
      {
        flag=1;
        break;
      }
    }
    if(flag==1)
      cnt++;
  }

  cout<<cnt<<"\n"; 
}

return 0;
}