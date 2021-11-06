#include <stdio.h>
void fun()
{
    static int i = 1;
    printf("%d", i);
    i++;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}