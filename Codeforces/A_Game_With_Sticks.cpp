#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,m;
cin>>n>>m;

if(min(n,m)%2==0)
{
  cout<<"Malvika";
}
else
{
  cout<<"Akshat";
}

return 0;
}