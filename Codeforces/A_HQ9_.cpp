#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
int n=s.size();

for(int i=0; i<n; i++)
{
  if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
  {
    cout<<"YES";
    return 0; 
  }
}
cout<<"NO";

return 0;
}