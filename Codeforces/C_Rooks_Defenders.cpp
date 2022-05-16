#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll n,q;
  cin>>n>>q;
  // map<pair<ll,ll>,ll>m;
  map<ll,ll>row,col;
  // for(ll i=1; i<=n; i++)
  // {
  //   for(ll j=1; j<=n; j++)
  //   {
  //     auto p=make_pair(i,j);
  //     m[p]=0;
  //   }
  // }

  while(q--)
  {
    ll t;
    cin>>t;
    if(t==1)
    {
      ll x,y;
      cin>>x>>y;
      // auto p=make_pair(x,y);
      // m[p]=1;
      row[x]++;
      col[y]++;
    }
    else if(t==2)
    {
      ll x,y;
      cin>>x>>y;
      // auto p=make_pair(x,y);
      // m[p]=0;
      row[x]--;
      col[y]--;
    }
    else
    {
      ll x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      ll flag=1;
      // for(ll i=x1; i<=x2; i++)
      // {
      //   for(ll j=y1; j<=y2; j++)
      //   {
      //     if(!row[i] && !col[j]) flag=0;
      //   }
      // }
      for(ll i=x1; i<=x2; i++)
      {
        if(!row[i] && !col[y1]) flag=0;
      }
      // for(ll i=y1; i<=y2; i++)
      // {
      //   if(!col[i] && !row[x1]) flag=0;
      // }
      if(flag) cout<<"Yes\n";
      else cout<<"No\n";
    }
  }
  return 0;
}