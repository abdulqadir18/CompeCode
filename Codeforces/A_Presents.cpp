#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,i;
cin>>n;
int *a= new int(n);
int *s= new int(n);

for(i=0; i<n; i++)
{
  cin>>a[i];
  s[(a[i]-1)]=i+1;
}
for(i=0; i<n; i++)
  cout<<s[i]<<" ";

return 0;
}