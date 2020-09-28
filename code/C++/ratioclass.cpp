// Ratio using class
#include<iostream>
using namespace std;
class ratio
{
    double n,d;
    public:
    void assign()
{
    cout<<"Enter the numerator: ";
    cin>>n;   
    cout<<"\nEnter the denominator: ";
    cin>>d;
}
    double convert()
{
    double y;
    y=n/d;
    return y;
}
    void insert()
{
    int t;
    t=n;
    n=d;
    d=t;

}
    int print()
{
    cout<<n<<":"<<d;
    return 0;
}
};
    int main() 
{
ratio r;
r.assign();
cout<<"\nequivalent ratio="<<r.convert();
r.insert();
cout<<"\nreciprocal: ";
r.print();
return 0;
}



