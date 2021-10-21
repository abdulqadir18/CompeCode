#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin>>n>>m;
vector <int> a(m);
for(int i=0; i<m; i++)
{
  cin>>a[i];
}

sort(a.begin(),a.end());
int mn=INT_MAX;
for(int i=0; i<=m-n; i++)
{
  int diff= a[n-1+i]-a[i];
  mn=min(mn,diff);
}

cout<<mn;



return 0;
}