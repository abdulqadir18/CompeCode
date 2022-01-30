#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll t;
cin>>t;
while(t--)
{
  ll x,y;
  cin>>x>>y;
  if(x%2==0 && y%2==0)
  {
    cout<<x/2<<" "<<y/2<<"\n";
  }
  else if((x+y)%2==0)
  {
    if(x>=y)
    {
      x=(x-y)/2;
    }
    else
    {
      y=(y-x)/2;
    }
    cout<<x<<" "<<y<<"\n";
  }
  else
  {
    cout<<-1<<" "<<-1<<"\n";
  }
}

return 0;
}