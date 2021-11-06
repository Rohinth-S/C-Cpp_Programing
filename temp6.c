#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_str(char *p1, char *p2)
{
	int ret = 1;
	int i = 1;
	while ((p2 != NULL) && (i < strlen(p2)))
	{
		if (p1[i] == p2[i])
		{
			i++;
		}
		else
		{
			ret = 0;
			break;
		}
	}
	return ret;
}

int main()
{
	char *str = NULL;
	char *substr = NULL;
	int found = 0;

	str = (char *)malloc(sizeof(char) * 100);
	memset(str, 0, sizeof(char) * 100);
	substr = (char *)malloc(sizeof(char) * 50);
	memset(substr, 0, sizeof(char) * 50);

	printf("Enter main str :=");
	gets(str);

	printf("Enter sub str :=");
	gets(substr);

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == substr[0])
		{
			int res = compare_str(&str[i], substr);
			if (res == 1)
				found++;
		}
	}

	printf("FOund = %d\n", found);


	return 0;
}