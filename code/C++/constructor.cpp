// calculate the value of series using default constructor

#include<iostream>
using namespace std;
    class series 
{
    int n,i,sum;
    public:
    series()  // not parameterised 
{
    cout<<"Enter the value of n:";
    cin>>n;
    sum=0;
}
    void compute();
    void display();
};
    inline void series::compute()
{
    for ( i = 0; i <=n; i++)
    {
        sum=sum+i*i;
    }    
}
    inline void series::display()
{
    cout<<"Value of the series="<<sum;
}
    int main() 
{
    series s;
    s.compute();
    s.display();
    return 0;
}





