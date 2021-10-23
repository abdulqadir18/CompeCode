#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b,c;
cin>>a;
cin>>b;
cin>>c;
int n=6;
int x[6];
x[0]=a+b+c;
x[1]=a*b*c;
x[2]=(a+b)*c;
x[3]=a*(b+c);
x[4]=(a*b)+c;
x[5]=a+(b*c);
int mx=INT_MIN;
for(int i=0; i<6; i++)
{
  mx=max(mx,x[i]);
}
cout<<mx;

return 0;
}