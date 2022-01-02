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

  ll i=1;
  ll x=1,y=1;
  set<int>s;
  while(x<=n || y<=n)
  {
    x=pow(i,2);
    if(x<=n)
    {
      s.insert(x);
    }
    y=pow(i,3);
    if(y<=n)
    {
      s.insert(y);
    }
    i++;
  }

  cout<<s.size()<<"\n";
}

return 0;
}