#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;

for(int i=0; i<s.size(); i++)
{
  s[i]=tolower(s[i]);
  if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'))
    cout<<"."<<s[i];
}

return 0;
}