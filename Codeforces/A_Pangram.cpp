#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
string s;
cin>>s;
map<char,int>m;
for(int i=0; i<n; i++)
{
  m[tolower(s[i])]++;
}
if(m.size()>=26) cout<<"YES\n";
else cout<<"NO\n";

return 0;
}