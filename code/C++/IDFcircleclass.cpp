// Inter nally defined functions
#include <iostream>
using namespace std;
class circle
{
float r,a;  //data memberes
public:
void read()
{
    cout<<"Enter the radius:";
    cin>>r;
}
void area()
{
    a=3.14*r*r;
}
void display()
{
    cout<<"The area is: "<<a;
}
};
int main()
{
    circle c;
// calling the functions to perform the operation
    c.read();
    c.area();
    c.display();
    return 0;
}