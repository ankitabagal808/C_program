#include<stdio.h>
#include<conio.h>
int main()
{
     int a=0,sum=0,num;
   
     printf("Enter number = ");
     scanf("%d",&num);
   
     while(a<=num)
     {
       sum=sum+a;
       a++;
     }
     printf("\n Sum of given numbers= %d",sum); 
   
     getch();
     return 0;
   
}
