//using ladder if.. else//

#include<stdio.h>
#include<conio.h>
int main()
{
   int num1=0, num2=0;
   printf("\n Enter first integer number =");
   scanf("%d",&num1);
   printf("\n Enter second integer number =");
   scanf("%d",&num2);
   
   if(num1==num2)
   {
      printf("\n both numbers are equal");
   }
   else if(num1>num2)
   {
       printf("\n number %d is maximum\n",num1);
   }
   else 
   {
       printf("\n number %d is maximum\n",num2);
   }
   
   printf("\n*****THANKS*****");
   return 0;
}