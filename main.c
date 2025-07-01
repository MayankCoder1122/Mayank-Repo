//WAP to get 10 elements in an array and print all the elements on separate line.


#include <stdio.h>

int main()
{
   int a[10],i;
   
   printf("Enter 10 values :\n");
   
   for(i=0;i<=9;i++)
   {
       printf("Enter value at %d position : ",i+1);
       scanf("%d",&a[i]);
   }
   printf("\nYou have entered :\n");
   for(i=0;i<10;i++)
   {
       printf("%d\n",a[i]);
   }

    return 0;
}