#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
     int num1=0,num2=0;
     
     Up:
     printf("\n Enter first number :");
     scanf("%d",&num1);
     printf("\n Enter second number :");
     scanf("%d",&num2);
    
     if(num1==num2)
     {
         printf("\n Both numbers are equal.");
         goto Up;
     }
     
     (num1>num2)? printf("\n Number %d is maximum.",num1): printf("\n Number %d is maximum",num2);
     
     printf("\n\t\tTHANK YOU");
     
     getch();
     return 0;
}



