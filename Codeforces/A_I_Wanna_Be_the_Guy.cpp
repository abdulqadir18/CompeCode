#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int pi;
cin>>pi;
set <int> s;
while(pi--)
{
  int x;
  cin>>x;
  s.insert(x);
}
int qi;
cin>>qi;
while(qi--)
{
  int x;
  cin>>x;
  s.insert(x);
}

auto pos=s.find(0);

if((s.size()==n && pos!=s.begin()) || (s.size()==n+1 && pos==s.begin()) )
{
  cout<<"I become the guy.";
}
else
{
  cout<<"Oh, my keyboard!";
}

return 0;
}