#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll n,q;
  cin>>n>>q;
  vector<ll>a(n);
  ll sum=0;
  ll c=-1;
  unordered_map<ll,ll>cur;
  for(ll i=0; i<n; i++){ cin>>a[i]; sum+=a[i];}
  vector<ll>ans(q);
  for(ll i=0; i<q; i++)
  {
    ll t;
    cin>>t;
    if(t==1)
    {
      ll i,x;
      cin>>i>>x;
      if(cur.find(i)!=cur.end() || c==-1)sum+=(x-a[i-1]);
      else sum+=(x-c);
      cur[i]++;
      a[i-1]=x;
    }
    else
    {
      ll x;
      cin>>x;
      unordered_map<ll,ll>temp;
      cur=temp;
      c=x;
      sum=n*x;
    }
    cout<<sum<<"\n";
  }
  return 0;
}