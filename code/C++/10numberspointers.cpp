#include<iostream>
using namespace std;
int main() 
{
int*p,i;
p = new int[10];
cout<<"Enter the 10 values:\n";
for(i=0;i<=9;i++)
cin>>*(p+i);
for(i=0;i<=9;i++)
cout<<*(p+i)<<"\n";
return 0;
}