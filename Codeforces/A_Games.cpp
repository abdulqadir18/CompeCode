#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,i,j;
cin>>n;
vector <int> h(n);
vector <int> g(n);
for(i=0; i<n; i++)
{
  cin>>h[i]>>g[i];
  cout<<"\n";
}
int cnt=0;
for(i=0;i<n;i++)
{
  for(j=0; j<n; j++)
  {
    if(i!=j && h[i]==g[j])
      cnt++;
  }
}
cout<<cnt;

return 0;
}