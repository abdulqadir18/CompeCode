#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
  string s;
  cin>>s;
  string ans="0";
  for(int i=0; i<3; i++)
  {
    ans+=s[i];
  }
  cout<<ans;
  return 0;
}