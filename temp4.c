#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int *P,*Q,*temp;
    int temp_size,p_size,q_size,i,mem_size;
    
    printf("Enter temp array : ");
    scanf("%d",&temp_size) ;
    
    temp = (int *)malloc(temp_size*sizeof(int));
    
    memset(temp,0,temp_size*sizeof(int));
   // mem_size = temp_size;
    for(i=0;i<temp_size;i++)
    {
        printf("Enter the temp element %d -> ",i);
        scanf("%d",&temp[i]);
    }
    
    printf("Enter P size : ");
    scanf("%d",&p_size);
    
    
    P = (int*)malloc(p_size*sizeof(int));
    memset(P,0,p_size*sizeof(int));
    memcpy(P,temp,p_size*sizeof(int));
   // mem_size = p_size;
    for(i=0;i<p_size;i++)
    {
        printf("The P element is %d ->%d\n ",i,P[i]);
        
    }
    
    q_size = temp_size - p_size;
    printf("The Q size : %d\n",q_size);

    Q = (int*)malloc(q_size*sizeof(int));
    memset(Q,0,q_size*sizeof(int));
    memcpy(Q,temp+p_size,q_size*sizeof(int));
    // mem_size = q_size;
    for(i=0;i<q_size;i++)
    {
        printf("The Q element is %d ->%d\n ",i,Q[i]);
        
    }
    
    free(temp);
    return 0;
}
