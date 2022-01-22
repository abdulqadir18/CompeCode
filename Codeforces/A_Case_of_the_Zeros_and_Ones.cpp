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

ll cnt0=count(s.begin(),s.end(),'0');
ll cnt1=count(s.begin(),s.end(),'1');

cout<<n-2*min(cnt0,cnt1);
return 0;
}