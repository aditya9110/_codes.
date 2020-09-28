// parameterised constructor

#include<iostream>
using namespace std;
class series
{
    int i,n,sum;
    public:
    series(int x)
  {
    n=x;
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
   cout<<"\nThe sum of the series :"<<sum;

}
int main() 
{
    int n;
    cout<<"Enter the values:";
    cin>>n;
series s(n);
s.compute();
s.display();
return 0;
}