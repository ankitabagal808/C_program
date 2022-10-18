#include<stdio.h>
#include<conio.h>
int main()
{
     int r=0, c=0,k=0;
     
     printf ("Enter number :");
     scanf ("%d",&k);
     
     for (r=1;r<=k;r++)
     {
       for (c=1;c<=k;c++)
       {
         if(r==1 || k==r ||c==r)
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
