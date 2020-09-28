#include<iostream>
using namespace std;
int main() 
{
int marks[]={35,45,23,12,};
// address of arrays
int* p=marks;

for (int i = 0; i < 4; i++)
{
    cout<<(*p+marks[i])<<endl;
}
// Pointer arithmetic
//  adddress new= address current + i*sizeof(datatype)

















return 0;
}