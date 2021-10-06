#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,i;
cin>>n;
vector<int>a(n);
for(i=0; i<n; i++)
  cin>>a[i];

int max=INT_MIN;
int min=INT_MAX;
int maxi=0, mini=0;

for(i=0; i<n; i++)
{
  if(max<a[i])//max be leftmost
  {
    max=a[i];
    maxi=i;

  }
  if(min>=a[i])//min be rightmost
  {
    min=a[i];
    mini=i;
  }
}

if(maxi<mini)
  cout<<maxi+(n-mini-1);
else
  cout<<maxi+(n-mini-1)-1;

return 0;
}