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
  long *a = new long(n);
  for(long i=0; i<n; i++)
    cin>>a[i];

  if(is_sorted(a[0], a[n-1]))
    cout<<"0";
  else
  {
    cout<<n-1;
    for(long j=0; j<n; j++)
    {
      long d=min_element(a[j], a[n-1])-a[j];
      cout<<j<<d<<n;
    }
  }
}

return 0;
}