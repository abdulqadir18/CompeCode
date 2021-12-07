#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

int n;
cin>>n;
vector <string> s(n);
for(int i=0; i<n; i++)
{
  cin>>s[i];
}

int team_a=1,team_b=0;
string a,b;
a=s[0];

for(int i=1; i<n; i++)
{
  if(a==s[i])
  {
    team_a++;
  }
  else
  {
    b=s[i];
    team_b++;
  }
}

if(team_a>team_b)
{
  cout<<a;
}
else
{
  cout<<b;
}
return 0;
}