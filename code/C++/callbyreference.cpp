#include<iostream>
using namespace std;
// fumction for swappping two integers by reference variable.
void swap(int &x,int &y )
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}
  int main()
{
     int a,b;
     cout<<"Enter the values:\n";
     cin>>a>>b;
     cout<<"Before swapping: \n"<<"a="<<a<<"\nb="<<b;
     //  calling the function
    swap(a,b);
    cout<<"\nAfter swapping: \n"<<"a="<<a<<"\nb="<<b;
    return 0;
}


