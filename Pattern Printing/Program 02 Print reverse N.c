#include<stdio.h>
#include<conio.h>
int main()
{
     int r=0, c=0,k=0;
     
     printf ("\nEnter number :");
     scanf ("%d",&k);
     
     for (r=1;r<=k;r++)
     {
       for (c=1;c<=k;c++)
       {
         if(c==1|| k==c|| c==(k-r+1))
         {
            printf(" * ");
         }
         else
         {
            printf ("   ");
         }
       }
       printf ("\n");
     }
     
     getch();
     return 0;
}
