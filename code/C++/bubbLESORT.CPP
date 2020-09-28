#include<iostream>
using namespace std;
int main(int argc,char** argv ) 
{
int a[10]={11,9,36,54,67,87,98,3,5,8};
int i,j,t;
cout<<"Before sorting the array is:"; 
for ( i = 0; i <10; i++)
{
    cout<<"\n"<<a[i]; 
}
for ( i = 0; i <10; i++)
{
    for(j=0;j<10;j++)
    {
      if(a[j]>a[j+1])
      {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t; 
      }  
    }
}
    cout<<"\n After the sorting the values are:";
    for ( i = 0; i <10; i++)
    {
        cout<<"\n"<<a[i];
    }

return 0;
}