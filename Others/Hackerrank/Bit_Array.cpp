#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    typedef long long ll;
    ll n,s,p,q;
    cin>>n>>s>>p>>q;
    ll m=pow(2,31);
    set<ll>se;
    ll x=s%m;
    se.insert(x);
    for(ll i=1; i<n; i++)
    {
        x=(x*p+q)%m;
        // cout<<x<<" ";
        se.insert(x);
    }
    cout<<se.size();
    return 0;
}