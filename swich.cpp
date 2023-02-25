#include<iostream>
using namespace std;
int main(){
   int ch;
   cout<<"Enter The Choise ";
   cin>> ch;
   switch (ch)
   {
   case 1:
    cout<<"You Are 1 Year Old "<<endl;
    break;
   case 2:
    cout<<"You Are 2 Year Old "<<endl;
    break;
    case 3:
    cout<<"You Are 3 Year Old "<<endl;
    break;
  
   default:
   cout<<"Not Any Age";
    break;
   }
   
   
    return 0;
}