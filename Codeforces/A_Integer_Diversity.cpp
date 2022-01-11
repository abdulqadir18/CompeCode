#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  vector<int>a(n);
  map<int,int>m;
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    m[abs(a[i])]=0;
  }

  int cnt=0;
  for(int i=0; i<n; i++)
  {
    m[abs(a[i])]++;
    if(m[abs(a[i])]==1)
    {
      cnt++;
    }
    else if(m[abs(a[i])]==2 && a[i]!=0)
    {
      cnt++;
    }
  }

  cout<<cnt<<"\n";

}

return 0;
}