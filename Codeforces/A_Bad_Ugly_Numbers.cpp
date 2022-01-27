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
  if(n==1)
  {
    cout<<-1<<"\n";
  }
  else
  {
    cout<<2;
    for(ll i=1; i<n-1; i++)
    {
      cout<<3;
    }
    cout<<3<<"\n";
  }
}

return 0;
}