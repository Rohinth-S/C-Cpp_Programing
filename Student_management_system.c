#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct s_info *p = NULL;
int p_size = 0;

void roll_bubble_sort();
void roll_sort();
void input();
void no_update();
void add_student();
void print();
void delete();
void name_update();

struct s_info
{
	char name[30];
	int no;
	float marks;
};

int main()
{
	int choice,ch;
	input();

	while(1)
	{
		printf("\n1. Add new student details.\n2. Print all details.\n3. Update details.\n4. Delete details.\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

	switch(choice)	
	{
		case 1 : add_student();
			 break;

		case 2 : print();
			 break;

		case 3 : 
			 printf("\n1. Update student name.\n2. Update student marks.\n");
			 scanf("%d",&ch);
				
			 switch(ch)
			 {
			 	case 1 : name_update();
					 break;

				case 2 : no_update();
					 break;
			
		                default :

					 printf("you entered wrong position...!!");
					 break;

			 }
			 break;

		case 4 : delete();
			 break;

		default :

		printf("You entered wrong choice. !!");	 
	}

	}

	return 0;
}

void input()
{
	int i=0;
	printf("Enter the size of structure : ");
	scanf("%d",&p_size);

	p = (struct s_info *)malloc(sizeof(struct s_info) *p_size);
	memset(p,0,sizeof(struct s_info) *p_size);
	
	for(i=0;i<p_size;i++)
	{
		printf("Enter the student no : ");
		scanf("%d",&p[i].no);
		
		fgetc(stdin);
		printf("Enter the size name : ");
	  	fgets(p[i].name,30,stdin);
		
		printf("Enter the student marks : ");
		scanf("%f",&p[i].marks);	
	}
}

void print()
{
	printf("\nPrintf the student details....");

	for(int i=0;i<p_size;i++)
	{
		printf("\nstudent no is : %d\n",p[i].no);
		printf("student name is : %s\n",p[i].name);
		printf("student marks is : %.2f\n",p[i].marks);
	}
}

void no_update()
{
	int roll_no = 0;
	float up_marks = 0;
	int i;
	int is_roll_found = 0;

	printf("Enter the roll number you want to update the marks : ");
	scanf("%d",&roll_no);

	for(i=0;i<p_size;i++)
	{
		if(roll_no == p[i].no)
		{
			is_roll_found = 1;
			printf("Enter the new marks : ");
			scanf("%f",&up_marks);

			p[i].marks = up_marks;
		}
	}
	if(is_roll_found == 0)
	{
		printf("\n roll number not found.....!!");
	}
}

void add_student()
{
	int t_size = 0;
	struct s_info *temp = 0;
	t_size = p_size + 1;

	temp = (struct s_info *)malloc(sizeof(struct s_info)*t_size);
	memset(temp,0,t_size*sizeof(struct s_info));

	memcpy(temp,p,p_size*sizeof(struct s_info));
	free(p);

	printf("Enter the student no : ");
	scanf("%d",&temp[t_size - 1].no);
	
	fgetc(stdin);
	printf("Enter the student name : ");
	fgets(temp[t_size - 1].name,30,stdin);

	printf("Enter the student marks : ");
	scanf("%f",&temp[t_size-1].marks);

	p = temp;
	p_size = t_size;
}

void delete()
{
	int index = 0;
	int i = 0;
	struct s_info *temp = 0;
	int t_size = p_size - 1;

	printf("Enter the roll number to remove details : ");
	scanf("%d",&index);

	for(i=0;i<p_size;i++)
	{
		if(index == p[i].no)
		{
			temp = (struct s_info *)malloc(t_size*sizeof(struct s_info));
			memset(temp,0,t_size*sizeof(struct s_info));
			memcpy(temp,p,(i)*sizeof(struct s_info));
			memcpy(temp+i,(p+i+1),(p_size-i-1)*sizeof(struct s_info));
			free(p);
			p = temp;
			p_size = t_size;
		}
	}
}

void name_update()
{
	int q_size = 0;
	struct s_info *q = 0;
	int i,s_no;

	printf("Enter the no : ");
	scanf("%d",&s_no);

	q_size = p_size;

	q = (struct s_info*)malloc(q_size*sizeof(struct s_info));
	memset(q,0,q_size*sizeof(struct s_info));

	for(i=0;i<p_size;i++)
	{
		if(s_no == p[i].no)
		{
			fgetc(stdin);
			printf("Enter the new name for student : ");
			fgets(q[i].name,20,stdin);
			strcpy(p[i].name,q[i].name);
		}
	}	
		free(q);
		p_size = q_size;	

}
