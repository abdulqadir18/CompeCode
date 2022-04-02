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
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end());

    ll flag=0;
    if(n==1 && a[0]==k) flag=1;
    else
    {
      ll i=0, j=1;
      while(i<n && j<n)
      {
        if(a[j]-a[i]==k){flag=1; break;}
        else if(a[j]-a[i]>k) i++;
        else j++;
      }
    }
    
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";

  }
  return 0;
}