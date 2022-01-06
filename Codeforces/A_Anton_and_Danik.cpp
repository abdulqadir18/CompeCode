#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;

ll n;
cin>>n;
string s;
cin>>s;
ll anton=count(s.begin(),s.end(),'A');
ll danik=count(s.begin(),s.end(),'D');

if(anton>danik)
{
  cout<<"Anton";
}
else if(anton<danik)
{
  cout<<"Danik";
}
else
{
  cout<<"Friendship";
}
return 0;
}