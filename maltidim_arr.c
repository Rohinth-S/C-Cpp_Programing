 #include<stdio.h>
int main()
{
 int n_stus = 3;
 int n_subs = 5;
 int marks[3][5];
 int i , j;

for(int i=0;i<n_stus;i++)
{
   for(int j=0;j<n_subs;j++)
  {
   	printf("Enter the marks of students %d is subjects %d\n",i+1,j+1);
	scanf("%d",&marks[i][j]);
  }
   
}

for(int i=0;i<n_stus;i++)
{
  for(int j=0;j<n_subs;j++)
  {
  printf("The marks of student %d in subjects %d is: %d\n",i+1,j+1,marks[i][j]);
  }
}
return 0;
}
