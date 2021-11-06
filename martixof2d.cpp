#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int rowC, columnC, i, j;
    int firstM[10][10], secondM[10][10], resultM[10][10];

    cout << " 2 d array matrix addition \n";

    cout << "number of row to add martrices :";
    cin >> rowC;
    cout << "number of column to add matrices :";
    cin >> columnC;

    cout << "Element of first matrix : \n ";

    for (i = 0; i < rowC; i++)
        for (j = 0; j < columnC; j++)
            cin >> firstM[i][j];

    cout << "Element of second matrix : \n ";

    for (i = 0; i < rowC; i++)
        for (j = 0; j < columnC; j++)
            cin >> secondM[i][j];

    cout << "sum of entered martrices : \n";

    for (i = 0; i < rowC; i++)
    {
        for (j = 0; j < columnC; j++)
        {
            resultM[i][j] = firstM[i][j] + secondM[i][j];
            cout << resultM[i][j] << "\t";
        }
        cout << "\n";
    }

    getch();
    return 0;
}