// copy constructor

#include<iostream>
using namespace std;
class series
{
   int n,i,sum;
   public:
   series(int x)
  {
   n=x;
   sum=0;  
  }
   series(series &x)
  {
   n=x.n;
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
    cout<<"The sum is:"<<sum<<"\n";
}
int main() 
{
int x;
cout<<"Enter the value:";
cin>>x;
series s(x);
s.compute();
s.display();
series s2(s);
s2.compute();
s2.display();
return 0;
}