#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

char trump;
cin>>trump;

string first,second;
cin>>first>>second;
if(first[1]!=second[1])
{
  if(first[1]==trump)cout<<"YES\n";
  else cout<<"NO\n";
}
else
{
  map<char,int>m;
  m['6']=1, m['7']=2, m['8']=3, m['9']=4, m['T']=5, m['J']=6, m['Q']=7, m['K']=8, m['A']=9;
  if(m[first[0]]>m[second[0]])cout<<"YES\n";
  else cout<<"NO\n";
}

return 0;
}