#include<iostream>
using namespace std;
void swap(int num1, int num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"\n\nThe values after swapping are:"<<"\na="<<num1<<"\nb="<<num2;
}
int main() 

{
    int a=5,b=6;
    cout<<"The two nos.:\n";
    cin>>a>>b;
    cout<<"\nThe values before swapping are:\n"<<"a="<<a<<"\nb="<<b;
    swap(a,b);
}
