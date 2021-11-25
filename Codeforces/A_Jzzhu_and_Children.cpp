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
  x[a[i]]=i+1;
}

while(a.size()!=0)
{
  for(int i=0; i<a.size(); i++)
  {
    if(a[i]-m<=0)
    {
      if(a.size()==1)
      {
        cout<<x[a[i]];
      }
      a.erase(a.begin()+i);
    }
    else
    {
      a.push_back(a[i]-m);
      a.erase(a.begin()+i);
    }
  }
}

return 0;
}