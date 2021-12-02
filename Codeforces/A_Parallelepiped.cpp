#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int x,y,z;
cin>>x>>y>>z;

int ans=4*(sqrt(x*y/z)+sqrt(y*z/x)+sqrt(x*z/y));
cout<<ans;

return 0;
}