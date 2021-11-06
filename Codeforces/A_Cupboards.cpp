#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
vector <int> l(n),r(n);
for(int i=0; i<n; i++)
{
  cin>>l[i]>>r[i];
}

int l0=0,l1=0,r0=0,r1=0;
for(int i=0; i<n; i++)
{
  if(l[i]==0)
  {
    l0++;
  }
  if(l[i]==1)
  {
    l1++;
  }
  if(r[i]==0)
  {
    r0++;
  }
  if(r[i]==1)
  {
    r1++;
  }
}

int m[4]={l0+r1, r0+l1, l0+r0, l1+r1};
int mn=INT_MAX;
for(int i=0; i<4; i++)
{
  mn=min(mn,m[i]);
}
cout<<mn;

return 0;
}