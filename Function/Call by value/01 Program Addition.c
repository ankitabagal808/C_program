#include<stdio.h>
#include<conio.h>

int main()
{
     int num=0,total;
   
     printf("Enter total number you have:");
     scanf("%d",&num);
   
     total =addition(num);
     
     printf("\n Summation of given numbers =%d",total);
   
     return 0;
}

int addition(int N1)
{
     int no=0,Sum=0;
     for(int i=1;i<=N1;i++)
     {
        printf("\n\t Enter number %d =",i);
        scanf("%d",&no);
        Sum=Sum+no;
     }
    
     return Sum ;
}