#include<stdio.h>
#include<conio.h>
int main()
{
     int num=0,temp=0,i=0;
   
     printf("Enter the number :");
     scanf("%d",&num);
     temp=num;
   
     for(i=1;i<=10;i++)
     {
        printf("\t\t \n%d ",num*i);
     }
   
     getch();
     return 0;
}