#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int size;

    cout << "find the array size";
    size = sizeof(array) / sizeof(int);

    cout << "the size of array is " << size;

    getch();
    return 0;
}