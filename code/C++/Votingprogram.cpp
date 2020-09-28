#include<iostream>
using namespace std;
int main()
{ //                     The VOTING PROGRAM using if...else. 
 int age;
 cout<<"Enter the age :";
 cin>>age;
 if(age<18)
 {
     cout<<"You are not eligible to vote";
 }
 else if (age==18)
 {
 cout<<"Welcome for the First time";
 }
 else
 {
 cout<<"\nYou are eligible to vote";
 }
 cout<<"\nThank You";
 return 0;
}