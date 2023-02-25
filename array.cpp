#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;
    cout<<"Enter The 3*3 Matrix - ";
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix Is A "<<endl;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << a[i] [j];
        }
      cout<<endl;
    }
    
    
    
    
}