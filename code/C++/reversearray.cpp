#include<iostream>
using namespace std;
void main() 

{
    
int n,i,a[100];
    cout<<"Enter no of element:";
    cin>>n;
    for (i=0;i<=n-1;n++)
{
    cout<<"Enter a value:";
    cin>>a[i];
}
    int reverse(int a[],int n); 
    reverse(a,n);

    int reverse(int a[],int n);
{
    int i,rev[100];
    for ( i = 0; i<=n-1; i++)
{
    rev[n-i-1]=a[i];
}
    cout<<"The reverse of this array is:\n";
    for ( i = 0; i<=n-1; i++)
{
    cout<<rev[i]<<endl;
}
}
}