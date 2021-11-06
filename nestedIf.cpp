#include <stdio.h>
int main()
{
    int v1, v2;
    printf("\n First variable is entered\n");
    scanf("%d",&v1);
    printf("\n second variable is entered\n");
    scanf("%d",&v2);

    if (v1 != v2)
    {
        printf("\n First variable is not equal to second variable\n");

        if (v1 < v2)
        {
            printf("\n First variable is not equal to second variable\n");
        }
        else
        {
            printf("\n second variable is greater than  first variable\n");
        }
    }
    else

        printf("\n First variable is  equal to second variable\n");

    return 0;
}