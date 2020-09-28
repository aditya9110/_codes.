// Inline Member functions

#include<iostream>
using namespace std;
class circle
{
float a,r;
public:
    void read();
    void area();
    void display();
};
inline void circle::read()     
{
    cout<<"Enter radius:";
    cin>>r;
}
inline void circle::area()
{
  a=3.14*r*r;
}
inline void circle::display()
{
    cout<<"The area is:"<<a;
}
int main() 
{
circle c;
// calling the functions to perform the operation
c.read();
c.area();
c.display();
}
