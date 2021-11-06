#include <iostream>
#include <conio.h>
using namespace std;
#define array_size 5
int main()
{
    int numbers[array_size], i, search_key;
    cout << "simple searching in array\n ";

    for (i = 0; i < array_size; i++)
    {
        cout << "Enter the number :" << (i + 1) << " :";
        cin >> numbers[i];
    }
    cout << "Enter the key\n";
    cin >> search_key;

    for (i = 0; i < array_size; i++)
    {
        if (numbers[i] == search_key)
        {
            cout << "search element found.position is :" << (i + 1) << " \n";
            break;
        }
        if (i == array_size - 1)
        {
            cout << "search Element is not in array \n";
        }
        }
}