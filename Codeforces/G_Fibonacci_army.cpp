#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector<int>a(n+1);
if(n==1) cout<<1;
else
{
  a[0]=1;
  a[1]=1;
  for(int i=2; i<=n; i++)
  {
    a[i]=a[i-1]+a[i-2];
  }
  cout<<a[n];
}


return 0;
}