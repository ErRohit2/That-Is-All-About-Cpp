//  pointer :- 

#include<iostream>
using namespace std;
int main()
 {
    int a=90;
    int *ptar;
    ptar=&a;
    cout<<"The Value Of a Is "<<a <<endl;
    cout<<" The Valuse Of a Is "<<*ptar<<endl;
    cout<<"The Adderss of a is "<<&a<<endl;
    cout<<"The address of a is "<<*ptar<<endl;
     float b=95.67;
     float *ptr;
    ptar=&a;
    cout<<"The Value Of a Is "<<b <<endl;
    cout<<" The Valuse Of a Is "<<*ptr<<endl;
    cout<<"The Adderss of a is "<<&b<<endl;
    cout<<"The address of a is "<<*ptr<<endl;

    return 0;
}
