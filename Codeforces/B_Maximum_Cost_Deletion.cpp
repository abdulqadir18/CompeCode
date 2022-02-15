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
  int n,a,b;
  cin>>n>>a>>b;
  string s;
  cin>>s;
  int cnt=1;
  char cur=s[0];
  for(int i=1; i<n; i++)
  {
    if(s[i]!=cur)
    {
      cur=s[i];
      cnt++;
    }
  }
  cout<<n*a+max(n*b,((cnt/2)+1)*b)<<"\n";
}

return 0;
}