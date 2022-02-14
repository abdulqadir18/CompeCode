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
  string s;
  cin>>s;
  for(int i=1; i<n; i++)
  {
    if(s[i]=='?' )s[i]='R';
  }
}

return 0;
}