#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector <ll> a(n);
for(ll i=0; i<n; i++)
{
  cin>>a[i];
}

ll mn=LLONG_MAX;
ll cnt=0;
ll ans=0;
for(ll i=0; i<n; i++)
{
  if(mn>a[i])
  {
    mn=a[i];
    cnt=0;
    ans=i+1;
  }
  else if(mn==a[i])
  {
    cnt++;
  }
}

if(cnt!=0)
{
  cout<<"Still Rozdil";
}
else
{
  cout<<ans;
}

return 0;
}