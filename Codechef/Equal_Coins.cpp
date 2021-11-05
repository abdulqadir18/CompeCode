#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long n;
cin>>n;
while(n--)
{
  long x,y;
  cin>>x>>y;
  if(x==0 && y%2!=0)
  {
    cout<<"NO\n";
  }
  else if(x%2!=0)
  {
    cout<<"NO\n";
  }
  else
  {
    cout<<"YES\n";
  }
}

return 0;
}