#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  double *a= new double(n);
  int i=0,j=0,cnt=0;
  for(i=0; i<n; i++)
    cin>>a[i];

  while(i<n && j<n)
  {
    if(i!=j && ((a[i]-a[j])/a[i])<((a[i]-a[j])/a[j]))
        cnt++;
    if(j==n-1)
    {
      j=0;
      i++;
    }
    if(j!=n-1)
      j++;
  }
  cout<<cnt<<"\n";
}

return 0;
}