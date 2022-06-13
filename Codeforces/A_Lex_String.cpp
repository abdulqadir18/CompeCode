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
    ll m,n;
    cin>>m>>n;
    ll k;
    cin>>k;
    string a,b;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll i=0, j=0;
    string ans;
    bool flag;
    if(a[i]<=b[j]) flag=true;
    while(i<m && j<n)
    {
      string add;
      if(flag)
      {
        ll cnt=1;
        add+=a[i++];
        while(i<m && cnt<k && a[i]<=b[j])
        {
          add+=a[i];
          cnt++;
          i++;
        }
        flag=false;
      }

      else
      {
        ll cnt=1;
        add+=b[j++];
        while(j<n && cnt<k && a[i]>=b[j])
        {
          add+=b[j];
          cnt++;
          j++;
        }
        flag=true;
      }
      ans+=add;
    }

    cout<<ans<<"\n";

  }
  return 0;
}