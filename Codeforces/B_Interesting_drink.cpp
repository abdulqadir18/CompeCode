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

ll m;
cin>>m;
vector <ll> q(m);
for(ll i=0; i<m; i++)
{
  cin>>q[i];
}

sort(a.begin(),a.end());
for(ll i=0; i<m; i++)
{
  
  if(a[0]>q[i])
  {
    cout<<0<<"\n";
  }
  else
  {
    ll lo=0, hi=n, mid=0, flag=0;
    while(lo<hi)
    {
      mid=(hi+lo)/2;
      if(a[mid]>q[i])
      {
        hi=mid;
        flag=0;
      }
      else
      {
        lo=mid+1;
        flag=1;
      }
    }
    if(flag==0 && mid<n)
    {
      cout<<mid<<"\n";
    }
    else
    {
      cout<<mid+1<<"\n";
    }
  }
}

return 0;
}