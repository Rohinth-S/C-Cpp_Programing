#include <iostream>
using namespace std;
int main()
{
    int test[2][3][2];
    cout << "Enter 12 values : \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cin >> test[i][j][k];
            }
        }
    }
    cout << "\n Display values stored :" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << " test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
            }
        }
    }
}