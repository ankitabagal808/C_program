#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
    
    Up:
      printf("\n Enter an integer:");
      scanf("%d",&num);
      
      if(num==0)
      {
         printf("\n Zero number is neutral");
         goto Up;
      }
      
      if(num%2==0)
      {
         printf("\n %d number is even",num);
      }
      else
      {
         printf("\n %d number is odd",num);
      }
      
      printf("\n \nThanks");
      
    getch();
    return 0;
}