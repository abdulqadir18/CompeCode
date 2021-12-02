#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector<int> a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

int ans1,ans2,mn=INT_MAX;
for(int i=0; i<n-1; i++)
{
  if(mn>abs(a[i]-a[i+1]))
  {
    mn=abs(a[i]-a[i+1]);
    ans1=i;
    ans2=i+1;
  }          
}   
if(mn>abs(a[n-1]-a[0]))
{
  mn=abs(a[n-1]-a[0]);
  ans1=n-1;
  ans2=0;
}    
cout<<ans1+1<<" "<<ans2+1;

return 0;
}