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
map<string,int>m;
int max=0;
string ans;
for(int i=0; i<n-1; i++)
{
  string x;
  x+=s[i];
  x+=s[i+1];
  
  m[x]++;
  if(max<m[x])
  {
    ans=x;
    max=m[x];
  }
}
cout<<ans;
return 0;
}