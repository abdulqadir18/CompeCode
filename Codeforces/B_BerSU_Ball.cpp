#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll n;
  cin>>n;
  vector<ll>a(n);
  for(ll i=0; i<n; i++) cin>>a[i];
  ll m;
  cin>>m;
  vector<ll>b(m);
  for(ll i=0; i<m; i++) cin>>b[i];

  ll i=0, j=0;
  ll ans=0;
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  while(i<n && j<m)
  {
    if(abs(a[i]-b[j])<=1) {ans++; i++; j++;}
    else if(a[i]>b[j]) j++;
    else i++;
  }
  cout<<ans;

  return 0;
}