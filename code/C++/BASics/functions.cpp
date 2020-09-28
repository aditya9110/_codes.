#include<iostream>
using namespace std;
void sum(int a,int b)  //formal parameters
{
  int c =a+b;
   cout<<"The sum is:"<<c;

}
int main() 
{
    int num1, num2; //actual parameters
    cout<<"enter the nos:";
    cin>>num1;
    cout<<"Enter the 2nd no:";
    cin>>num2;
    sum(num1,num2);
return 0;
}
