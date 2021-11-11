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
  ll n;
  cin>>n;
  vector <ll> a(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }

  ll nOdd=0;
  for(int i=0; i<n; i++)
  {
    if(a[i]%2!=0)
    {
      nOdd++;
    }
  }

  if(nOdd%2==0)
  {
    cout<<nOdd/2<<"\n";
  }
  else
  {
    cout<<(nOdd-1)/2<<"\n";
  }
}

return 0;
}