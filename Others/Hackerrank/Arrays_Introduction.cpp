#include <iostream>
using namespace std;
int main()
{
  int n, *arr, *rev, i;
  cin>>n;
  arr = (int*) malloc(n * sizeof(int));
  rev = (int*) malloc(n * sizeof(int));

  for ( i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  for ( i = 0; i < n; i++)
  {
    rev[i]=arr[n-i-1];
  }
  for ( i = 0; i < n; i++)
  {
    printf("%d ",rev[i]);
  }
  
  
  
  
  return 0;
}