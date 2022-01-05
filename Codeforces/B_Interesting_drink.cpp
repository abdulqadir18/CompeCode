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
  // cout<<i;
  
  if(a[0]>q[i])
  {
    cout<<0<<"\n";
  }
  else if(a[n-1]<=q[i])
  {
    cout<<n<<"\n";
  }
  else
  {
    ll lo=0, hi=n-1, mid;
    ll flag=0;
    while(lo<hi && flag!=1)
    {
      mid=(hi-lo)/2+lo;

      if(a[mid]==q[i])
      {
        cout<<mid+1<<"\n";
        flag=1;
      }
      else if(a[mid]<q[i])
      {
        lo=mid+1;
        flag=2;
      }
      else
      {
        hi=mid-1;
        flag=3;
      }
    }
    if(flag==2)
    {
      cout<<hi<<"\n";
    }
    else if(flag==3)
    {
      cout<<hi+1<<"\n";
    }
  }

}

return 0;
}