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
  vector <ll> a(7);
  for(ll i=0; i<7; i++)
  {
    cin>>a[i];
  }

  cout<<a[0]<<" "<<a[1]<<" "<<a[6]-a[1]-a[0]<<"\n";
}

return 0;
}