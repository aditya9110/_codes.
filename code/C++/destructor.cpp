#include<iostream>
using namespace std;
class ratio
{
    public: 
     ratio()
    {
       cout<<"Object is born"; 
    }    
     void x()
    {
     cout<<"\nnow x is aliive";
    }
    ~ratio()
    
    {
        cout<<"\nobjet dies";
    }
};
int main() 
{
ratio r;
r.x();
return 0;
}