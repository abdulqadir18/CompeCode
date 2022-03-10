#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{

ll t;
cin>>t;
while(t--)
{
  ll n;
  cin>>n;
  vector<ll>a(n);
  a[0]=1;
  ll flag=1;
  for(ll i=1; i<n; i++)
  {
    a[i]=a[i-1]*3;
    if(a[i]>1000000000)
    {
      cout<<"NO\n";
      flag=0;
      break;
    }
  }

  if(flag)
  {
    cout<<"YES\n";
    for(ll i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<"\n";
  }
}

return 0;
}