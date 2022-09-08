#include<iostream>
using namespace std;


int main(){

  int i,j,n;
    cin>>n;
    char ch,start;
    
    for(i=1;i<=n;i++)
    {
        ch='A'+i-1;
        for(j=1;j<=i;j++)
        {
            start=ch+j-1;
        
            cout<<start;
        }
    
        cout<<"\n";}
return 0;
}


