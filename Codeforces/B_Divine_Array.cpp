#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

typedef long long ll;

ll t;
cin>>t;
while(t--)
{
  ll n;
  cin>>n;
  vector <ll> a(n);
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
  }
  ll q;
  cin>>q;
  vector <ll> x(q);
  vector <ll> c(q);
  for(ll i=0; i<q; i++)
  {
    cin>>x[i]>>c[i];
  }

  for(ll i=0; i<q; i++)
  {
    vector <ll> s;
    for(ll j=0; j<=c[i]; j++)
    {
      s.assign(n,0);
      for(ll k=0; k<n; k++)
      {
        s[a[k]]++;
      }
    }

    cout<<s[a[x[i]]]<<"\n";
  }

}

return 0;
}