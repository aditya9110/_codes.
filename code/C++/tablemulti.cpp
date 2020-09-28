#include<iostream>
using namespace std;
int main()
{
    int i=1, no;
    cout<<"Enter the no: ";
    cin>>no;
    do
    {
        cout<<no*i<<endl;
        i++;
    } while(i<=10);
    return 0;
}