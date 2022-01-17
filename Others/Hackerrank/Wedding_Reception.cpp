#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n,k;
cin>>n>>k;
vector<ll>a(n);
for(ll i=0; i<n; i++)
{
  cin>>a[i];
}

sort(a.begin(),a.end());


return 0;
}