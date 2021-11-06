#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i;
	int *p;
	int *temp_array;
	int op;
	int p_size;
	int temp_size;
	int pos,g_size=0;
    
    printf("Enter the size of array : ");
    scanf("%d",&p_size);
    
    p = (int *)malloc(p_size*sizeof(int));
    
    memset(p,0,p_size*sizeof(int));

    
    for(i=0;i<p_size;i++)
    {
        printf("Enter the array of %d -> ", i);
        scanf("%d",&p[i]);
    }
    
    g_size = p_size;
    
while(1)
   {
        printf("select your choice : \n1. Resize the array : \n2. print the array : \n");
        scanf("%d",&op);
        
    switch(op)
    
        {
            case 1:
            
                printf("Resize the array : ");
                scanf("%d",&temp_size);
                
                 printf("Enter which position : ");
                 scanf("%d",&pos);
                 
            temp_array = (int *)malloc(temp_size*sizeof(int));
            
            memset(temp_array,0,temp_size*sizeof(int));
            
            int size = (p_size > temp_size) ? temp_size : p_size;
            
           
            
            memcpy(temp_array,(p + pos),sizeof(int)*size);
            
            free(p);
            
            p_size = temp_size;
            
            p = temp_array;
            
            g_size = temp_size;
            
            
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








