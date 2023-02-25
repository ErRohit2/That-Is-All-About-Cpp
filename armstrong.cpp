#include<iostream>
using namespace std;
int main()
 {
    int i,num,r,sum=0,n,f;
    cout<<"Enter The Number ";
    cin>> num;
      n=num;
    while (num>0)
    {
        r=num%10;
        f=1;
        i=1;
      while (i<=r)
      {
        f=f*i++;
      }
        sum=sum+f;
        num=num/10;
        }
      cout<<sum<<endl;
      if(sum==n){
        cout<<"Special Number"<<endl;
      }
      else{
        cout<<"Not Armstrong"<<endl;
      }
      return 0;
    
 }