#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int drink=(k*l)/nl;
int slice=c*d;
int salt=p/np;

int mn=min(min(drink,slice),salt);

cout<<mn/n;

return 0;
}