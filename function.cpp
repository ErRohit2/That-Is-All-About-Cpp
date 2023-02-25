#include<iostream>
using namespace std;
int add(int a , int b)
 {
    int c;
    c=a+b;
    return c;
   }
  int main()
   {
    int a,b;
    cout<<"Enter a Number - "<<endl;
    cin>>a;
    cout<<"Enter B number - "<<endl;
    cin>>b;
    cout<<"The Sum Of A nd B is "<<add(a,b)<<endl;
   }
