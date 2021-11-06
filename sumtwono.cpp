#include <iostream>
using namespace std;
int main()
{
    int firstNumber, secondNumber, sumoftwoNumbers;

    cout << "Enter two intergers: ";
    cin >> firstNumber >> secondNumber;
    sumoftwoNumbers = firstNumber + secondNumber;
    cout << firstNumber << "+" << secondNumber << "=" << sumoftwoNumbers;

    return 0;
}