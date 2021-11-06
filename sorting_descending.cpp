#include <iostream>
#include <conio.h>
using namespace std;
#define array_size 5

int main()
{
    int numbers[array_size], i, j, temp;
    cout << "soring descending order in array\n";
    for (i = 0; i < array_size; i++)
    {
        cout << "Enter the number :" << (i + 1) << " :";
        cin >> numbers[i];
    }

    for (i = 0; i < array_size; ++i)
    {
        for (j = i + 1; j < array_size; ++j)
        {
            if (numbers[i] < numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    cout << "sorting order array : \n";
    for (i = 0; i < array_size; ++i)
        cout << numbers[i] << endl;
    getch();
    return 0;
}