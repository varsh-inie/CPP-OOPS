#include <iostream>
using namespace std;
int main() 
{
   int a = 0, b = 1,sum = 1,n=7,i;
  
  for (i = 3; i <= n; i++) 
  {
    int c = a + b;  
   if(i%2==0)
    sum += c;
    a=b;
    b=c;
}
cout<<sum;
  return 0;
}
