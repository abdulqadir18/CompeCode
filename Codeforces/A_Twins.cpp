#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,i=0;
cin>>n;
int *a= new int(n);
for(i=0; i<n; i++)
  cin>>a[i];

sort(a,a+n);
int sum = accumulate(a,a+n,0);

for(i=n-1; i>=0; i--)
{
  int me=accumulate(a+i,a+n,0);
  if(me>sum-me)
  {
    cout<<n-i;
    break;
  }
}

return 0;
}