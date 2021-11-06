#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    printf("Enter a number :\n");
    scanf("%d", &a);
    while (a > 0)
    {
        b = a % 10;
        sum = sum + b;
        a = a / 10;
    }
    printf("sum is : %d\n", sum);
    printf("a is : %d\n", a);
    return 0;
}