#include<stdio.h>
#include<conio.h>
int main()
{
     int i=0,j=0;
   
     printf("\t\t\tTable 1 to 10:\n");
   
     for(i=1;i<=10;i++)
     {
       for(j=1;j<=10;j++)
       {
          printf("%4d",i*j); 
       }
       printf("\n");
     }
   
     getch();
     return 0;
}