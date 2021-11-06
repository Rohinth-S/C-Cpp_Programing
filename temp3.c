#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int *p,*q,*temp;
    int p_size,q_size,mem_size,i,r,g_size,temp_size;
    
    printf("Enter the  P size : ");
    scanf("%d",&p_size);
    
    p=(int*)malloc(p_size*sizeof(int));
		memset(p,0,p_size*sizeof(int));
		mem_size = p_size;
		for(i=0;i<p_size;i++)
		{
			printf("Enter The P elememnts %d -> ",i);
			scanf("%d",&p[i]);
		}
		
		
		
	printf("Enter the  Q size : ");
    scanf("%d",&q_size);
    
    q=(int*)malloc(q_size*sizeof(int));
		memset(q,0,q_size*sizeof(int));
		mem_size = q_size;
		for(i=0;i<q_size;i++)
		{
			printf("Enter The Q elememnts %d -> ",i);
			scanf("%d",&q[i]);
		}
	
	temp_size = p_size + q_size;
	
// 	printf("%d",temp_size);
		
    temp = (int *)malloc(temp_size*sizeof(int));

    	memset(temp,0,temp_size*sizeof(int));
		
		memcpy(temp,p,p_size*sizeof(int));
		
		memcpy(temp + p_size,q,q_size*sizeof(int));
		
		free(p);
		free(q);
		
		for(i=0;i<temp_size;i++)
				            
		   {
	        	printf("The Resized array is %d -> %d\n",i,temp[i]);
	       }	
		
    return 0;		
	
}




