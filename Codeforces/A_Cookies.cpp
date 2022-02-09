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
ll noOfOdd=0;
for(ll i=0; i<n; i++)
{
  cin>>a[i];
  if(a[i]%2!=0) noOfOdd++;
}

if(noOfOdd%2==0) cout<<n-noOfOdd;
else cout<<noOfOdd;

return 0;
}