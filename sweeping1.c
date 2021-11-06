#include<stdio.h>
int main()
{
double a,b,temp;
printf("Enter the no. a\n");
scanf("%lf",&a);
printf("Enter the no. b\n");
scanf("%lf",&b);
temp=a;
a=b;
b=temp;
printf("After swaping a=%.2lf\n",a);
printf("After swaping b=%.2lf\n",b);
return 0;
}
