#include<iostream>
using namespace std;
int main()
{
    int i,j,n,n1,n2;
    cin>>n;
    n1=(n+1)/2;
    n2=(n1-1);
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n1-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }

   cout<<endl; 
   }
   for(i=n2;i>=1;i--)
    {
        for(j=1;j<=n2-i+1;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }

   cout<<endl; 
   }
return 0;}