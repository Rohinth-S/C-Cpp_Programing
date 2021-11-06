#include <iostream>
#include <conio.h>

using namespace std;
#define array_size 5
int main()
{
    int numbers[array_size], i;

    cout << "read array and print array : \n";
    cout << "reading array with position : \n";
    for (i = 0; i < array_size; i++)
    {
        cout << "Enter the number :  " << (i + 1) << " :";
        cin >> numbers[i];
    }

    cout << "\nprinting array: \n";

    for (i = 0; i < array_size; ++i)
    {
        cout << numbers[i];
    }
    getch();
    return 0;
}