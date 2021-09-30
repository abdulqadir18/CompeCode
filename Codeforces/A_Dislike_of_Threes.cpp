#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k=0,i;
        cin>>n;

        for(i=1; i<=1666; i++){
          if(!(i%10==3 || i%3==0))
            k++;
          if(k==n)
            break;
        }

        cout<<i<<endl;
    }
}