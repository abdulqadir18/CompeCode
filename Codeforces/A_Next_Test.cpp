#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector<int>a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

sort(a.begin(),a.end());
for(int i=1; i<=n; i++)
{
  if(a[i-1]!=i)
  {
    cout<<i;
    return 0;
  }
}
cout<<n+1;
return 0;
}