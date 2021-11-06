#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[10];
    char temp;

    int i, j;

    printf("enter the string :- ");
    scanf(" %s \n", &string);
    int n = strlen(string);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (string[i] > string[j])
            {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }

    printf("String after sorting  - %s \n", string);
    return 0;
}