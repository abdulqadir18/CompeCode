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
for(ll i=0; i<n; i++)
{
  cin>>a[i];
}

(count(a.begin(),a.end(),1))?cout<<"HARD":cout<<"EASY";

return 0;
}