#include<stdio.h>
#include<conio.h>
int main()
{
     int num=0;
     
     printf("Enter the number:");
     scanf("%d",&num);
     
     if((num%5)==0 && (num%7)==0)
     {
        printf("Enter number is divisible by 5 and 7");
     }
     else if(num%5==0)
     {
        printf("Enter number is divisible by 5 not 7");
     }
     else if(num%7==0)
     {
        printf("Enter number is divisible by 7 not 5");
     }
     else
     {
        printf("Enter number is neither divisible by 7 nor 5");
     }
     
     getch();
     return 0;
}