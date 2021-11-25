#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

vector <string> s;
string i;
while(cin>>i)
{
  s.push_back(i);
}
set <char> m;
for(int i=0; i<s.size(); i++)
{
  int x;
  if(i==0)
  {
    x=s[0][1];
  }
  
  else
  {
    x=s[i][0];
  }

  if(x>='a' && x<='z')
  {
    m.insert(x);
  }
}
cout<<m.size();
return 0;
}