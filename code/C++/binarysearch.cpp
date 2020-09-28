
#include<iostream>
using namespace std;
int main(int argc, char** _argv) 
{
int a[10], l=1,u=10,t,mid,i;
cout<<"Enter the array:\n";
for ( i = 0; i < 10; i++)
    {
    cin>>a[i];
    cout<<"\n";
    }
cout<<"Enter the number for the search:";
cin>>t;
    while (l<=u)
    {
        mid=(l+u)/2;
        if (t==a[mid])
    {
        cout<<"data found at possition "<<mid+1;
        break;
    }
        else if (t<a[mid])
    {
            u=mid-1;
    }
        else
    {
            l=mid+1;
     }
    }
    if (t>u)
    {
        cout<<"\n Data not found \n";
        
    }
    
return 0;
}


