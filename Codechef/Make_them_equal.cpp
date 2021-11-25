#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  vector <int> a(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }

  int mx=INT_MIN;
  int mn=INT_MAX;
  for(int i=0; i<n; i++)
  {
    mx=max(mx,a[i]);
    mn=min(mn,a[i]);
  }

  cout<<mx-mn<<"\n";
}

return 0;
}