#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int *p,*q;
    int size;
    int i;
    int option,temp,temp2;
    int g_size = 0;
    
    printf("Enter The Array Size Here:");
		scanf("%d",&size);

		p=(int *)malloc(size*sizeof(int));
		
		memset(p,0,size*sizeof(int));
        
        temp2 = size;
        
        for(i=0;i<size;i++)
		{
			printf("Enter The Array of %d ->",i);
			scanf("%d",&p[i]);
		}
		g_size = size;
	while(1)
	{	
		
		printf("Select YouR choice\n1.Resize The Array\n2.Prints The Array\n");	
		scanf("%d",&option);	

		switch(option)
		{
	        case 1:	
                
				printf("Enter To Resie Array Size :- ");
				scanf("%d",&temp);
							
				q =(int *)malloc(temp*sizeof(int));
				
				memset(q,0,temp*sizeof(int));
				
				temp2 = (size <= temp ) ? size : temp ;
				
				memcpy(q,p,temp2*sizeof(int));
					
				free(p);
				g_size = temp;
				p = q;	
				break;
				
		    case 2 : 
		    
		        printf("Printing The Arrays:\n");
				
				for(i=0;i<g_size;i++)
				{
					printf("The Resized array is %d -> %d\n",i,p[i]);
				}	
				break;
				
				default :
				
				printf("You Enter Wroung Size....!!! (TRY AGAIN)\n");
				break;	
		}
	}
}












