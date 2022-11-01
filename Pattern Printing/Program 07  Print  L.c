#include<stdio.h>
#include<conio.h>

int main()
{
     int totalrows, colno=0, rowno=0;
     
     printf("\n Enter the number for rows : ");
     scanf("%d",&totalrows);
     
     for(rowno=1;rowno<=totalrows;rowno++)
     {
        for(colno=1;colno<=rowno;colno++) 
        {
          if((colno==1) || (rowno==totalrows))
          {
              printf("* ");
          }
          else
          {
              printf(" ");
          }
        } 
        printf("\n");
     }
     
     getch();
     return 0;
}

