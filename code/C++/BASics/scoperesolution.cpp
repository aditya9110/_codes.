#include<iostream>
using namespace std;
int a=10;
int main()
{
int a=15;
cout<<"\n local a="<<a;
cout<<"\n global a="<<::a;
return 0;
}
