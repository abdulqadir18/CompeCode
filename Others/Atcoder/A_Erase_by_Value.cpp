#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector<ll>a(n);
for(ll i=0; i<n; i++)
{
  cin>>a[i];
}

// ll cnt=0,mx=0,m=-1;
// ll cur=a[0];
// for(ll i=0; i<n; i++)
// {
//   if(cur!=a[i])
//   {
//     if(m<=cnt)
//     {
//       m=cnt;
//       mx=max(mx,a[i-1]);
//     }
//     cnt=1;
//     cur=a[i];
//   }
//   else
//   {
//     cnt++;
//   }
// }
// if(m<=cnt)
// {
//   mx=max(mx,a[n-1]);
// }

ll mx=0;
for(ll i=0; i<n; i++)
{
  mx=max(mx,a[i]);
}

for(ll i=0; i<n; i++)
{
  if(a[i]==mx)
  {
    continue;
  }
  cout<<a[i]<<" ";
}
cout<<" ";

return 0;
}