#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int t;
cin>>t;
while(t--)
{
  int h,n,m;
  cin>>h>>n>>m;
  while(n && h>(h/2)+10 && h>0)
  {
    h=(h/2)+10;
    n--;
  }
  // cout<<h;
  if(h<=m*10)
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
  }
}

return 0;
}