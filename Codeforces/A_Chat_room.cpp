#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
string h="hello";
int m=s.size();
int n=h.size();
int i,j=0;
for(i=0; i<m && j<n; i++)
{
  if(s[i]==h[j])
    j++;
}

if(j==n)
  cout<<"YES";
else
  cout<<"NO";

return 0;
}