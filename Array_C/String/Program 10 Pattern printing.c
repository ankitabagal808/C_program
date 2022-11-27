#include<stdio.h>
#include<conio.h>

int main()
{
     int c=0, r=0;
     
     for(r=1;r<=5;r++)
     {
        for(c=1;c<=r;c++) 
        {
          printf("%d",2*(c));
        } 
        printf("\n");
     }
     
     getch();
     return 0;
}


