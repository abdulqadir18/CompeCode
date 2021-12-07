#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,m;
cin>>n>>m;
vector <int> a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

int profit=0;
sort(a.begin(),a.end());
for(int i=0; i<n; i++)
{
  if(a[i]<0 && m>0)
  {
    m--;
    profit+=abs(a[i]);
  }
  else
  {
    break;
  }
}
cout<<profit;

return 0;
}