#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
int sum=0;
vector<int>a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
  sum+=a[i];
}
cout<<sum;

return 0;
}