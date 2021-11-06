#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char user[10];
    int new_password, passwrd;

    cout << "Enter username :" << endl;
    cin >> user;
    cout << "Enter password :" << endl;
    cin >> new_password;
    cout << "Enter current passwrd :" << endl;
    cin >> passwrd;

    if (new_password == passwrd)
    {
        cout << "password accepted...*";
    }
    else
    {
        cout << "password invalid...*";
    }
    exit;
    return 0;
}