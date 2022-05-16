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
    ll n;
    cin>>n;
    if(n%2!=0) cout<<-1<<"\n";
    else if(n==4 || n==6) cout<<1<<" "<<1<<"\n";
    else if(n<6) cout<<-1<<"\n";
    else
    {
      if(n%6!=0) cout<<(n/6)+1<<" ";
      else cout<<n/6<<" ";
      cout<<n/4<<"\n";
    }
  }
  return 0;
}