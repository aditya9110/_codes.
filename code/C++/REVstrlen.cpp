#include<iostream>
#include<string.h>
using namespace std;
int main() 
{
string str;
cout<<"Enter the string: ";
cin>>str;
int len= str.length();
int n=len-1;
for (int i = 0; i < len/2; i++)
{
    swap(str[i],str[n]);
    n=n-1;
}
cout<<"The reverse is: "<<str<<"\n";
return 0;
}