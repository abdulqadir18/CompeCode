#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll n;
  cin>>n;
  vector<string>a(n),b(n);
  map<string,int>m;
  for(ll i=0; i<n; i++) {cin>>a[i]; cin>>b[i]; m[a[i]]++; m[b[i]]++;}
  
  ll flag=1;
  for(ll i=0; i<n; i++)
  {
    if(a[i]==b[i] && m[a[i]]==2) continue;
    if(m[a[i]]>=2 && m[b[i]]>=2){ flag=0; break;}
  }
  (flag)?cout<<"Yes\n":cout<<"No\n";
  return 0;
}