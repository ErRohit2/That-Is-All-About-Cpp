#include<iostream>
using namespace std;
int main(){
    int marks[6];
    
    for (int i = 0; i < 6; i++)
    {
        cout<<"Enter The Marks Of "<<i<<"th Student "<<endl;
        cin>> marks[i];
    }
    for ( int i = 0; i < 6; i++)
    {
        cout<<marks[i]<<endl;
    }
    
}