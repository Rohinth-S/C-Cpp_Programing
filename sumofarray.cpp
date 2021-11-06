#include <iostream>
#include <conio.h>

using namespace std;
#define array_size 5

int main()
{
    int array[array_size];
    int i;
    float total = 0.0, average;

    cout << "sum of array \n";

    for (i = 0; i < array_size; i++)
    {
        cout << "Enter the number :" << (i + 1) << " :";
        cin >> array[i];
    }
    for (i = 0; i < array_size; i++)
    {
        total = total + array[i];
    }
    average = total / array_size;

    cout << "\n sum of all number  =" << total << "\n";
    cout << "\n average of all input number =" << average << "\n";
    getch();
}