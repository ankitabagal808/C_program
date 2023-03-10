#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
   
      printf("\n Enter an integer:");
      scanf("%d",&num);
      
      if(num==0)
      {
         printf("\n Zero number is neutral.");
         goto down;
      }
      
      (num%2==0)?printf("\n %d number is even. ",num):printf("\n %d number is odd. ",num);
      
      down:
      printf("\n \nThanks");
      
    getch();
    return 0;
}