#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long t;
cin>>t;
while(t--)
{
  long n,i;
  cin>>n;
  vector <long> a(n);
  for(i=0; i<n; i++)
    cin>>a[i];

  long hcf=1;
  for(i=0; i<n; i++)
  {
    hcf=__gcd(a[i],hcf);
  }

  for(i=0; i<n; i++)
    cout<<hcf<<" ";
  cout<<"\n";
}

return 0;
}