#include <iostream> 
using namespace std;

int main()
{

    int i,j,n;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {  int k;
     k=65+n-i;
      for(j=1;j<=i;j++)
      {
          cout<<char(k);
          k++;
      }
    cout<<"\n";}
 return 0;
}