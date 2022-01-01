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
  string s;
  cin>>s;

  cout<<(count(s.begin(),s.end(),'N')==1?"NO\n":"YES\n");
}

return 0;
}