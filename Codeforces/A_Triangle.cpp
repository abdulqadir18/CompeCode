#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int a[4];
cin>>a[0]>>a[1]>>a[2]>>a[3];
sort(a,a+4);
int cmp=a[0]+a[1]+a[2];
if(a[0]+a[1]>a[2] || a[0]+a[2]>a[3] || a[0]+a[1]>a[3] || a[1]+a[2]>a[3])cout<<"TRIANGLE";
else if(a[0]+a[1]==a[2] || a[0]+a[2]==a[3] || a[0]+a[1]==a[3] || a[1]+a[2]==a[3])cout<<"SEGMENT";
else cout<<"IMPOSSIBLE";

return 0;
}