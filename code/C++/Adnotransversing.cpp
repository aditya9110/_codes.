#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv) 
{
    int i;
    float*add,sum=0;
    add=new float[100];
    cout<<"Enter the numbers:\n";
    for ( i = 0; i < 5; i++)
    {
        cin>>*(add+i);
        sum=sum+*(add+i);
    }
    cout<<"The address at starting is:"<<(add+0);
    cout<<"\nThe size of the float datatype "<<sizeof(float)<<"\n";
    cout<<"Number "<<setw(20)<<"Address"<<"\n";
    for ( i = 0; i < 5; i++)
    {
        cout<<*(add+i)<<setw(20)<<add+i<<"\n";
    }
    cout<<"\nsum is: "<<sum<<"\n";
    cout<<"Address at the ending is: "<<(add+4)<<"\n";
    return 0;
}