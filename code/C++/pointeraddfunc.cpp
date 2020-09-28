#include<iostream>
using namespace std;
int sum (int *n1, int *n2)
{
    int c=*n1+*n2;
    cout<<"THe sum of the no. is:"<<c;
    return c;
}
int main() 
{
int a,b;
cout<<"Enter the two no:\n";
cin>>a>>b;
sum(&a,&b);

}
