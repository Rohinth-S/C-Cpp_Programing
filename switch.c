#include <stdio.h>

void  main() {
     int a,b,c,choice;
     while(choice != 5)
     {
         printf("\n 1. press 1 for addition");
         printf("\n 2. press 2 for subtraction");
         printf("\n 3. press 3 for maltipication");
         printf("\n 4. press 4 for division");
         printf("\n Enter the choice :- ");
         scanf("%d",&choice);
         
 
    switch(choice)
    {
        case 1:
               printf("Enter 2 number :- ");
               scanf("%d %d", &a, &b);
               c = a+b;
               printf("%d", c);
               break;
        
         case 2:
               printf("Enter 2 number :- ");
               scanf("%d %d", &a, &b);
               c = a-b;
               printf("%d", c);
               break;
             
        case 3:
               printf("Enter 2 number :- ");
               scanf("%d %d", &a, &b);
               c = a*b;
               printf("%d", c);
               break;
               
        case 4:
                printf("Enter 2 number :- ");
               scanf("%d %d", &a, &b);
               c = a / b;
               printf("%d", c);
               break;           
       
       default :
       printf("you have passed a wrong key... pless any key to continue");
    }
         
    }
}