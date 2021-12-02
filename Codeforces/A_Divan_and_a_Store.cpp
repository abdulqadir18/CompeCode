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
  ll n,l,r,k;
  cin>>n>>l>>r>>k;
  vector <ll> a(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }

  sort(a.begin(),a.end());
  ll sum=0,cnt=0;
  for(int i=0; i<n; i++)
  {
    if(a[i]>=l && a[i]<=r)
    {
      if(sum+a[i]<=k)
      {
        sum+=a[i];
        cnt++;
      }
      else
      {
        break;
      }
    }
  }
  cout<<cnt<<"\n";
}

return 0;
}