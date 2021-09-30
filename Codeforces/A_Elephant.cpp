#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long x;
cin>>x;
long c= x/5;
if(x%5!=0)
  cout<<c+1;
else
  cout<<c;
return 0;
}