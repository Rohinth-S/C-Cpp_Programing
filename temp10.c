#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu *p=NULL;
int p_size=0;

void roll_bubble_sort();
void roll_sort();
void edit();
void input();
void print();
void add();
void delete();
void name_edit();
void valid();
int search_by_roll(int roll);
int search_by_name(char *name, int name_size);

struct stu
{
	char name[20];
        int roll;
        float marks;


};

int main()
{
	int ch=0;
	int ch1=0;
	input();
	
	while(1)
	{	
	printf("\nop->1.Add New Entry.\nop->2.Print All Entry.\nop->3.Change Marks And Name\nop->4.Delete Entry\n");
	
	printf("\n\nEnter The Choice->");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			add();
			break;
		case 2:
			print();
			break;
		case 3:
			printf("\nop->1.Change Name Of Student\nop->2.Change Marks Of Student Using Name And Roll No->");
			printf("\nEnter The Choice->");
			scanf("%d",&ch1);
			
			switch(ch1)
			{
				case 1:
					name_edit();
					break;
			
				case 2:
					edit();
					break;
				default:
					printf("\nPlease Add Valid Entry.\n");
					break;
			}
		break;
			
		case 4:
			delete();
			break;
		
		default:
			printf("You Enter Wrong Choice.!!");
	}
		roll_insertion_sort();

	}
	return 0;
}


void input()
{
        int i=0;
        printf("enter the size of struct-");
        scanf("%d",&p_size);

        p=(struct stu*)malloc(p_size*sizeof(struct stu));
        memset(p,0,p_size*sizeof(struct stu));

        for(i=0;i<p_size;i++)
        {

                printf("enter the student roll number-");
                scanf("%d",&p[i].roll);

                fgetc(stdin);
                printf("enter the student name-");
                fgets(p[i].name,20,stdin);

                printf("enter the student marks-");
                scanf("%f",&p[i].marks);
        }
}

//print all values in dynamic memory function

void print()
{

        printf("\nprinting the values-\n\n");
        for(int i=0;i<p_size;i++)
        {
                printf("\nStudent Roll No Is-%d\n",p[i].roll);
                printf("Student Name Is-%s",p[i].name);
                printf("Studet Marks is-%0.2f\n",p[i].marks);

        }
}
//adding student function.

void add()
{
	int t_size=0;
	struct stu *temp=NULL;
	
	t_size=p_size+1;

	temp=(struct stu*)malloc(t_size*sizeof(struct stu));
	memset(temp,0,t_size*sizeof(struct stu));

	memcpy(temp,p,p_size*sizeof(struct stu));
	free(p);

	printf("enter the student roll number-");
	scanf("%d",&temp[t_size-1].roll);

	fgetc(stdin);
	printf("enter the student name-");
	fgets(temp[t_size-1].name,20,stdin);

	printf("enter the student marks-");
	scanf("%f",&temp[t_size-1].marks);

	p=temp;
	p_size=t_size;

}
void edit()
{
	float nmarks=0;
	int idx = -1;
	int is_roll_found = 0;
	int search_type = 0;
	int roll = 0;
	char name[20];


	printf("Search by,\n1) Roll No\n2) Name\n Enter your choice = ");
	scanf("%d", &search_type);

	switch(search_type)
	{
		case 1:
			printf("enter the roll number you want to update the marks-");
			scanf("%d",&roll);
			idx = search_by_roll(roll);
			break;
		case 2:
			fgetc(stdin);
			printf("enter the student name -");
			fgets(name,sizeof(name),stdin);
			idx = search_by_name(name, strlen(name));
			break;
		default:
			printf("Invalid seleaction\n");
			return;
	}

	if (idx < 0)
	{
		printf("\nRoll NUmber Not Found");
		return;
	}

	printf("enter the new marks-");
	scanf("%f",&nmarks);

	p[idx].marks=nmarks;
}
void delete()
{
	int roll=0;
	int i=0;
	struct stu *temp=NULL;
	int t_size=p_size-1;

	printf("enter the roll number to remove entry-");
	scanf("%d",&roll);

	for(i=0;i<p_size;i++)
	{
		if(roll==p[i].roll)
		{
			temp=(struct stu*)malloc(t_size*sizeof(struct stu));
			memset(temp,0,t_size*sizeof(struct stu));			


			memcpy(temp,p,(i)*sizeof(struct stu));
			memcpy(temp+i,(p+i+1),(p_size-i-1)*sizeof(struct stu));			
			free(p);
			p=temp;
			p_size=t_size;


		}

	}



}

int search_by_roll(int roll)
{
	int ret = -1;

	for(int i=0;i<p_size;i++)
	{
		if(roll == p[i].roll)
		{
			ret = i;
			break;
		}
	}
	return ret;
}

int search_by_name(char *name, int name_size)
{
	int ret = -1;

	for(int idx=0; idx<p_size; idx++)
	{
		if(0 == strncmp(p[idx].name, name, name_size))
		{
			ret = idx;
			break;
		}
	}

	return ret;
}


void name_edit()
{
	int t_size=0;
	struct stu *t;
	int i=0;
	int roll=0;

	printf("enter the roll number->");
	scanf("%d",&roll);

	t_size=p_size;


	t=(struct stu*)malloc(t_size*sizeof(struct stu));
	memset(t,0,t_size*sizeof(struct stu));
	for(i=0;i<p_size;i++)
	{

		if(roll==p[i].roll)
		{
			fgetc(stdin);
			printf("Enter The New Name For Student->");
			fgets(t[i].name,20,stdin);

			strcpy(p[i].name,t[i].name);
		}

	}

	free(t);
	p_size=t_size;
}	

void roll_sort()
{
	int temp=0;
	int i=0;
	int j=0;

	for(i=0;i<p_size-1;i++)
	{
		for(j=0;j<p_size-1-i;j++)
		{
			if(p[j].roll > p[j+1].roll)
			{
				struct stu temp;
				
				temp.roll = p[j].roll;
				strcpy(temp.name, p[i].name);
				
				temp.marks = p[j].marks;
				
				p[j].roll=p[j+1].roll;
				strcpy(p[j].name, p[j+1].name);
				
				p[j].marks=p[j+1].marks;
				
				p[j+1].roll=temp.roll;
				strcpy(p[j+1].name, temp.name);
				
				p[j+1].marks=temp.marks;
			
			}
		}
	}


}
void roll_bubble_sort()
{
	int i=0;
	int j=0;
	int flag;

	for(i=0;i<p_size;i++)
	{
		flag=0;

		for(j=0;j<p_size-1-i;j++)
		{
			if(p[j].roll>p[j+1].roll)
			{
				struct stu temp;

				temp.roll=p[i].roll;
				strcpy(temp.name,p[i].name);
				temp.marks=p[i].marks;
				
				p[j].roll=p[j+1].roll;
				strcpy(p[j].name,p[j+1].name);
				p[j].marks=p[j+1].marks;

				p[j+1].roll=temp.roll;
				strcpy(p[j+1].name,temp.name);
				p[j+1].marks=temp.marks;
				
				flag=1;	
			}
				if(flag==0)
					
				break;
		
		}
	}
}