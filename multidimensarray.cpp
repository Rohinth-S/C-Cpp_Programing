#include <iostream>
#include <conio.h>
using namespace std;

#include <stdio.h>
int main()
{
    int rowC1, columanC1, rowC2, columanC2, i, j, k, sum = 0;
    int firstM[10][10], secondM[10][10], resultM[10][10];

    cout << "number of row in firstM : ";
    cin >> rowC1;
    cout << "number of columan in firstM : ";
    cin >> columanC1;

    cout << "Elements of firstM : \n";

    for (i = 0; i < rowC1; i++)
        for (j = 0; j < columanC1; j++)
            cin >> firstM[i][j];

    cout << "number of row in secondM : ";
    cin >> rowC2;
    cout << "number of columan in secondM : ";
    cin >> columanC2;

    if (columanC1 != rowC2)
        cout << "matrices with entered order cann't be maltiplied.\n";
    else
    {
        cout << "element of secondM : \n";

        for (i = 0; i < rowC2; i++)
            for (j = 0; j < columanC2; j++)
                cin >> secondM[i][j];

        for (i = 0; i < rowC1; i++)
        {
            for (j = 0; j < columanC2; j++)
            {
                for (k = 0; k < rowC2; k++)
                {
                    sum = sum + firstM[i][k] * secondM[k][j];
                }
                resultM[i][j] = sum;
                sum = 0;
            }
        }

        cout << "after multiplication , the result is : \n";

        for (i = 0; i < rowC1; i++)
        {
            for (j = 0; j < columanC2; j++)
                cout << resultM[i][j] << "\t";
            cout << "\n";
        }
    }

    return 0;
}