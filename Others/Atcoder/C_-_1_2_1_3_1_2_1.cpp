#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll n;
  cin>>n;
  vector<string>a(n);
  a[0]="1";
  if(n==1) cout<<a[0];
  else
  {
    for(ll i=1; i<n; i++)
    {
      a[i]+=a[i-1];
      a[i]+=" ";
      a[i]+=to_string(i+1);
      a[i]+=" ";
      a[i]+=a[i-1];
    }
    cout<<a[n-1];
  }
  return 0;
}