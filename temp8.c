#include <stdio.h>
#include <stdlib.h>

struct mystruct
{
	int no;
	char name[28];
	char subject[30];
	float marks;
};

int main()
{

	int size = 0;
	int find ;
	struct mystruct *struct_array = NULL;
	printf("enter size of struct array : ");
	scanf("%d", &size);
	struct_array = (struct mystruct *)malloc(sizeof(struct mystruct) * size);

	for (int i = 0; i < size; i++)
        {       
                printf("Enter no : %d\n",i);
                struct_array[i].no = i;
                fgetc(stdin);
                printf("Enter name of element name : ");
                fgets(struct_array[i].name,28,stdin);
                printf("Enter the subject :");
                fgets(struct_array[i].subject,30,stdin);
                printf("Enter the marks :");
                scanf("%f",&struct_array[i].marks);
        }
        printf(" \n--------------------------------\n");
        
        printf("Find the student no is :");
        scanf("%d",&find);

	for (int i = 0; i < size; i++)
        {
            if(find == struct_array[i].no)
            {
              //  printf("array obj no : %d\n", struct_array[i].no);
                printf("array obj name : %s", struct_array[i].name);
                printf("The subject is : %s",struct_array[i].subject);
                printf("The marks is : %.2f",struct_array[i].marks);
                
            }
        }

	return 0;
}