#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Your Age - ";
    cin >> age;
    if (age >= 150)
    {
        cout << "Invalid Age" << endl;
    }
    else if (age >= 18)
    {
        cout << "You Can Vote";
    }
    else
    {
        cout << "Not Availble" << endl;
    }
    return 0;
}
