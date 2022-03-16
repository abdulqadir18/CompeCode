#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  ll n;
  cin>>n;
  if(n%2==0) cout<<n/2<<"\n";
  else cout<<n/2-n<<"\n";
  
  return 0;
}