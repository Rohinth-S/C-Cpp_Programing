#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i = 0;
	char *p = NULL;
	char ser;
	int count = 0;
	
	p=(char*)malloc(100*sizeof(int));
	printf("enter the string - ");
	gets(p);

	printf("enter the character to search-");
	scanf("%c",&ser);

	
	while(p[i] != '\0')
	{
		if(p[i]==ser)
		{
		count++;	
		}
		i++;
	}

//	gets(p);
	printf("total count of character in string is- %d\n",count);
	free(p);
	return 0;

}