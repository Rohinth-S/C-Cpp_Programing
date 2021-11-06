#include <stdio.h>
#include <stdlib.h>

struct mystruct
{
	int no;
	char name[28];
};

int main()
{
#if 0
	struct mystruct struct_array[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Enter name of element %d, name :", i);
		struct_array[i].no = i;
		scanf("%s",&struct_array[i].name);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("array obj no : %d\n", struct_array[i].no);
		printf("array obj name : %s\n", struct_array[i].name);
	}

	printf("size of my struct is %ld\n", sizeof(struct mystruct));
#endif

	int size = 0;
	struct mystruct *struct_array = NULL;
	printf("enter size of struct array : ");
	scanf("%d", &size);
	struct_array = (struct mystruct *)malloc(sizeof(struct mystruct) * size);

	for (int i = 0; i < size; i++)
        {
                printf("Enter name of element %d, name :", i);
                struct_array[i].no = i;
                scanf("%s",struct_array[i].name);
        }

	for (int i = 0; i < size; i++)
        {
                printf("array obj no : %d\n", struct_array[i].no);
                printf("array obj name : %s\n", struct_array[i].name);
        }

	struct mystruct *ele = &struct_array[size-3];

                printf("array leobj name : %s\n", (*ele).name);
                printf("array eleobj name : %s\n", ele->name);
		ele++;
                printf("array eleobj name : %s\n", ele->name);
		ele++;
                printf("array eleobj name : %s\n", ele->name);
	return 0;
}