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
  ll n;
  cin>>n;
  
  if(n%2==0)
  {
    cout<<0<<"\n";
  }
  else
  {
    int cnt=0,store=0;
    while(n!=0)
    {
      cnt++;
      if((n%10)%2==0)
      {
        store=cnt;
      }
      n=n/10;
    }

    if(store==cnt)
    {
      cout<<1<<"\n";
    }
    else if(store==0)
    {
      cout<<-1<<"\n";
    }
    else
    {
      cout<<2<<"\n";
    }
  }
}

return 0;
}