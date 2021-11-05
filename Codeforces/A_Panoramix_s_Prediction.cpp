#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin>>n>>m;
int a[15]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

for(int i=0; i<14; i++)
{
  if(a[i]==n && a[i+1]==m)
  {
    cout<<"YES";
    return 0;
  }
}
cout<<"NO";

return 0;
}