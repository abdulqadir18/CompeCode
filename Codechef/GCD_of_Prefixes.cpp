#include <bits/stdc++.h>
#include<algorithm>
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
  vector <ll> b(n);
  for(ll i=0; i<n; i++)
  {
    cin>>b[i];
  }

  ll g=b[0];

  if(n==1)
  {
    cout<<g<<"\n";
  }

  else
  {
    ll flag=0;
    for(ll i=1; i<n; i++)
    {
      if(g%b[i]!=0 || g<b[i])
      {
        flag=-1;
        break;
      }
      else
      {
        g=__gcd(g,b[i]);
      }
    }

    if(flag==-1)
    {
      cout<<-1<<"\n";
    }
    else
    {
      copy(b.begin(),b.end(),ostream_iterator<int>(cout, " "));
      cout<<"\n";
    }
  }

}

return 0;
}