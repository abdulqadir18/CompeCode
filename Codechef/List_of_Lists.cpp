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
  sort(a.begin(),a.end());

  ll current=a[0];
  vector <ll> c;
  ll cnt=0;
  for(ll i=0; i<n; i++)
  {
    if(a[i]!=current)
    {
      if(cnt>=2)
      {
        c.push_back(cnt); 
      }
      cnt=1;
      current=a[i];
    }
    else
    {
      cnt++;
    }
  }
  if(cnt>=2)
  {
    c.push_back(cnt);
  }

  if(n==1 || cnt==n)
  {
    cout<<0<<"\n";
  }
  else if(c.size()==0)
  {
    cout<<-1<<"\n";
  }
  else
  {
    sort(c.begin(),c.end());
    cout<<n-c[c.size()-1]+1<<"\n";
  }
}

return 0;
}