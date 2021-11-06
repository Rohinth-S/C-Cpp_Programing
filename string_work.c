#include<stdio.h>
int main()
{
 char str[]={'s','m','i','t','\0'};
 char *ptr=str;
 while(*ptr!='\0')
 {
printf("%c",*ptr); 
 ptr++;
 }

}
