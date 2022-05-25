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
    for(ll i=0; i<n; i++) cin>>a[i];
    ll m;
    cin>>m;
    vector<ll>b(m);
    for(ll i=0; i<m; i++) cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a[n-1]>b[m-1]) cout<<"Alice\n"<<"Alice\n";
    else if(a[n-1]<b[m-1]) cout<<"Bob\n"<<"Bob\n";
    else
    {
      cout<<"Alice\n"<<"Bob\n";
      // while(a.size() && b.size() && a.back()==b.back())
      // {
      //   a.pop_back();
      //   b.pop_back();
      // }
      // if(a.size()==0 && b.size()!=0) cout<<"Alice\n"<<"Bob\n";
      // else if(a.size()!=0 && b.size()==0) cout<<"Alice\n";
      // else if(a.size()==0 && b.size()==0) cout<<
    }
  }
  return 0;
}