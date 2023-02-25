#include<iostream>
#include<string>
using namespace std;
int main(){
    string name ="Rohit Kumar Sahu ";
    cout<<"The Name Is "<<name<<endl; 
    cout<<"The Length Name Is "<<name.length()<<endl; 
    cout<<"The Name Is "<<name.substr(0,3)<<endl; 
    cout<<"The Name Is "<<name.substr(2,155); 
}
// name - rohit..
// name.substr => substr => Sub String 
//  for eg we should want in name  --- roh
//  so we apply name.substr(0,3) || That Means O se 3 Tak Count Karega !!