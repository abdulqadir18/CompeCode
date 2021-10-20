#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int x;
cin>>x;
if(x%100==0 && x>=100)
{
  cout<<"Yes";
}
else
{
  cout<<"No";
}

return 0;
}