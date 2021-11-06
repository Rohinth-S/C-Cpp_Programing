#include <stdio.h>

int main() {
 int arr[100],position,c,n,val;
 
 printf("Enter number of elements :- ");
 scanf("%d",&n);
 
 printf("\n Enter %d element :- ");
 for(c=0;c<n;c++)
 {
     scanf("%d",&arr[c]);
 }
 
 printf("\nEnter the location where you went insert a new element :- ");
 scanf("%d",&position);
 
 printf("\n Enter the value to insert :- ");
 scanf("%d",&val);
 
 for(c=n-1; c>= position-1;c--)
 {
     arr[c+1]= arr[c];
 }
  arr[position - 1 ] = val;
  
  printf("Result array is:- ");
  for(c=0;c<=n;c++)
  {
      printf("%d\t", arr[c]);
  }
    return 0;
}