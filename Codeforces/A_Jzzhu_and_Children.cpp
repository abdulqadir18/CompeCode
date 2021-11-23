#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin>>n>>m;
vector <int> a(n),x(n+1);
for(int i=0; i<n; i++)
{
  cin>>a[i];
  x[a[i]]=i;
}

int ans=0;
int t=1;
while(t)
{
  for(int i=0; i<a.size(); i++)
  {
    a[i]-=m;
    if(a[i]<0)
    {
      a.erase(a.begin()+i);
      if(a.size()==1)
      {
        ans=x[a[i]];
        t=0;
        break;
      }
    }
    else
    {
      a.push_back(a[i]);
      a.erase(a.begin()+i);
      if(a.size()==1)
      {
        ans=x[a[i]];
        t=0;
        break;
      }
    }
  }
}
cout<<ans;

return 0;
}