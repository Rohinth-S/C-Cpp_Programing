#include <iostream>
#include <conio.h>

using namespace std;

#define ARRAY_SIZE 5

int main()
{
    int numbers[ARRAY_SIZE], i, largest;

    cout << "Find Largest or Biggest Number (Array) In C++ Example Program\n";

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter the Number : " << (i + 1) << "  : ";
        cin >> numbers[i];
    }

    largest = numbers[0];
    for (i = 1; i < ARRAY_SIZE; i++)
    {
        if (largest < numbers[i])
            largest = numbers[i];
    }
    cout << "\nLargest /Biggest Number Is : " << largest;

    getch();
    return 0;
}