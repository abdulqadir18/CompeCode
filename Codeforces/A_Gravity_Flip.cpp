#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int t;
cin>>t;
vector<int>a(t);
for(int i=0; i<t; i++)
{
  cin>>a[i];
}

sort(a.begin(),a.end());
for(int i=0; i<t; i++)
{
  cout<<a[i]<<" ";
}


return 0;
}