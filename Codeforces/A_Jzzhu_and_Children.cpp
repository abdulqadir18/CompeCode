#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin>>n>>m;
vector <int> a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

int max=0,ans;
for(int i=0; i<n; i++)
{
  int x;
  if(a[i]%m==0)
  {
    x=a[i]/m;
  }
  else
  {
    x=(a[i]/m)+1;
  }
  if(x>=max)
  {
    max=x;
    ans=i+1;
  }
}
cout<<ans;


return 0;
}