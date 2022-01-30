#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
vector<ll>a(n);
set<ll>s;
for(ll i=0; i<n; i++)
{
  cin>>a[i];
  s.insert(a[i]);
}
cout<<s.size();

return 0;
}