#include<stdio.h>
#include<conio.h>
int main()
{
     int num=0;
    
     Up:
     printf("\n Enter a number to check for positive or negative :");
     scanf("%d",&num);
     
     if(num==0)
     {
         printf("\n %d is neutral",num);
         goto Up;
     }
     
     (num>0)? printf("\n %d is positive",num):printf("\n %d is negative",num);
     
     printf("\n Thanks");
     
     getch();
     return 0;
}