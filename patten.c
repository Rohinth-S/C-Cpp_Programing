#include <stdio.h>
void printpatten(int n);

int main()
{
    int n = 4;
    printpatten(n);
    return 0;
}

void printpatten(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printpatten(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}