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
    ll n,m;
    cin>>n>>m;
    vector<vector<char>>a(n);
    for(ll i=0; i<n; i++)
    {
      vector<char>b(m);
      for(ll j=0; j<m; j++)
      {
        cin>>b[j];
      }
      a[i]=b;
    }
    
    if(a[0][0]=='R') cout<<"YES\n";
    else
    {
      ll flag=1;
      ll r=0,c=0;
      ll ans=1;
      for(ll i=0; i<n; i++)
      {
        for(ll j=0; j<m; j++)
        {
          if(a[i][j]=='R')
          {
            if(flag)
            {
              r=i;
              c=j;
              flag=0;
            }
            else
            {
              if(c>j) ans=0;
            }
          }
        }
      }
      
      if(ans) cout<<"YES\n";
      else cout<<"NO\n";
    }
  }
  return 0;
}