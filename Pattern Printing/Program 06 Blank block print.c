#include <stdio.h>
#include<conio.h>

int main()
{
     int r=0, c=0,n=0;
     
     printf ("Enter any number :");
     scanf ("%d",&n);
     
     for (r=1;r<=n;r++)
     {
       for (c=1;c<=n;c++)
       {
          if(r==1 || r==n || c==1 || c==n)
          {
              printf("*");
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
