#include <iostream>

using namespace std;

int main() {

    int N = 0;
    cin>>N;
    
    long data[N];
    for(auto i=0; i<N; i++)
        cin>>data[i];
    
    
    // write your code here
    // ans =
    int last,num=0;
    for ( auto i = 0; i < N; i++)
    {
      last=data[i]%10;
      num=num*10 +last;
    }

    if(num%10==0)
      cout<<"Yes";
    else
      cout<<"No";
    
    return 0;
}