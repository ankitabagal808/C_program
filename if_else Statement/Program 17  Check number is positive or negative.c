#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
     int num=0;
    
     printf("\n Enter a number to check for positive or negative :");
     scanf("%d",&num);
     
     if(num==0)
     {
         printf("\n %d is neutral",num);
         goto Down;
     }
     else if(num>0)
     {
         printf("\n %d is positive",num);
     }
     else 
     {
         printf("\n %d is negative",num);
     }
     
     Down:
     printf("\n Thanks");
     
     getch();
     return 0;
}


