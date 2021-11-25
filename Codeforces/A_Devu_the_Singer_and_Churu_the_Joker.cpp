#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n,d;
cin>>n>>d;
vector <int> a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

int ans=(n-1)*2;
int sum=ans*5;

for(int i=0; i<n; i++)
{
  sum+=a[i];
}

if(d-sum>=0)
{
  cout<<ans+(d-sum)/5;
}
else
{
  cout<<-1;
}
return 0;
}