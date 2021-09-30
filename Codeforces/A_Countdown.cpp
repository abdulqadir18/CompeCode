#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  char c='0';

  for(int i=0; i<n-1; i++)
  {
    if(s[i]!=0)
      c=c + s[i] + '1';
  }
  if(s[n-1]!=0)
    c=c + s[n-1];

  printf("%d\n",c);
}

return 0;
}