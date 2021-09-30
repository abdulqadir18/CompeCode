#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
int lowercnt=0;
int l= s.size();
for(int i=0; i<l; i++)
{
  if(s[i]>='a' && s[i]<='z')
    lowercnt++;
}
if((lowercnt>=l/2 && l%2==0) || (lowercnt>=(l+1)/2 && l%2!=0))
  transform(s.begin(), s.end(), s.begin(), ::tolower);
else
  transform(s.begin(), s.end(), s.begin(), ::toupper);

cout<<s;

return 0;
}