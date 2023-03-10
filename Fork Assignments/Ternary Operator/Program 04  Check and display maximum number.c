#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
     int num1=0,num2=0;
     
     printf("\n Enter first number :");
     scanf("%d",&num1);
     printf("\n Enter second number :");
     scanf("%d",&num2);
    
     if(num1==num2)
     {
         printf("\n Both numbers are equal.");
         goto Down;
     }
     
     (num1>num2)? printf("\n %d is maximum between two numbers.",num1): printf("\n %d is maximum between two numbers.",num2);
     
     Down:
     printf("\n\t\t****THANK YOU****");
     
     getch();
     return 0;
}




