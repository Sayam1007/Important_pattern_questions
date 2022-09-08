#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int i,j,n;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {  
        ch='A'+i-1;
        for(j=1;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<"\n";
    }
return 0;}
