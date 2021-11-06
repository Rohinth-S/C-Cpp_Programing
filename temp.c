#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cource{
		int marks;
		char subject[30];
	     };
int main()
{
	struct cource *ptr;
	int noofRocoreds;

	printf("Enter the number :");
	scanf("%d",&noofRocoreds);

	ptr = (struct cource*)malloc(noofRocoreds*sizeof(struct cource));
	for(int i=0;i<noofRocoreds;i++)
	{
		printf("Enter the subject and marks : \n");
		scanf("%s %d",(ptr+i)->subject,&(ptr+i)->marks);
	}	

	printf("Display information :\n");
	for(int i=0;i<noofRocoreds;i++)
	{
		printf("%s\t%d\n",(ptr+i)->subject,(ptr+i)->marks);
	}
	free(ptr);
	return 0;
}

