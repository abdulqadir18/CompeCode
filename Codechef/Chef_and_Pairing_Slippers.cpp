#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--)
{
  int n, l, x;
  cin>>n>>l>>x;
  int i= min(n-l, l);
  cout<<i*x<<"\n";
}
return 0;
}