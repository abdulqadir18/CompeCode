#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector<vector<char>>a;
for(int i=0; i<n; i++)
{
  vector<char>temp(n);
  for(int j=0; j<n; j++)
  {
    cin>>temp[j];
  }
  a.push_back(temp);
}
char x=a[0][0];
char y=a[0][1];
if(x==y)
{
  cout<<"NO\n";
  return 0;
}

for(int i=0; i<n; i++)
{
  for(int j=0; j<n; j++)
  {
    if(((i==j || i==n-j-1) && a[i][j]!=x))
    { 
      // cout<<i<<" "<<j;
      cout<<"NO\n";
      return 0;
    }
    else if((i!=j && i!=n-j-1) && a[i][j]!=y)
    { 
      // cout<<i<<" "<<j;
      cout<<"NO\n";
      return 0;
    }
  }
}
cout<<"YES\n";


return 0;
}