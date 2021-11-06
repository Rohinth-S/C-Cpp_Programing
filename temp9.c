#include <stdio.h>
#include <stdlib.h>

int size = 0;
struct mystruct *struct_array = NULL;

struct mystruct{
	int no;
	char name[28];
	float marks;
};

void my_function()
{   
    printf("\n ---------------------ADD THE STUDENT--------------\n");
    printf("Enter size of struct array : ");
	scanf("%d", &size);
	
    struct_array = (struct mystruct *)malloc(sizeof(struct mystruct) * size);

	for (int i = 0; i < size; i++)
        {       
                printf("Enter no : ");
                scanf("%d",&struct_array[i].no);
                fgetc(stdin);
                printf("Enter name of element name : ");
                fgets(struct_array[i].name,28,stdin);
                printf("Enter the marks :");
                scanf("%f",&struct_array[i].marks);
        }
        printf(" \n--------------------------------\n");
}

void Print()
{
    printf("\n------------------ PRINT THE STUDENT DETAILS ----------\n");
	for (int i = 0; i < size; i++)
        {
                printf("array obj no : %d\n", struct_array[i].no);
                printf("array obj name : %s", struct_array[i].name);
                printf("The marks is : %.2f",struct_array[i].marks);
                
        
        }
}

int main()
{
    int choice;
  
  while(1)
  {
	printf("\n1. Add the student.\n2. Print the details.\n\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
	    case 1 : 
	             my_function();
	             break;
	             
	    case 2 :
	            
	            Print();
	            break;
	}
	
  }	
	free(struct_array);
	return 0;
}