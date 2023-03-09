#include <stdio.h>
int main() 
{
     int n, i,number= 0;
 
     printf("\n Enter a positive integer: ");
     scanf("%d", &n);

     if(n<0)
     {
        printf("\n *** Please Enter Other Number ***");
     }

     if (n == 0 || n == 1)
     {
        number= 1;
     }
     for (i=2; i<=n/2; i++)
     {
        if (n % i == 0) 
        {
          number= 1;
          break;
        }
     }

     (number == 0)?printf("\n %d is a prime number.", n):
     printf("\n %d is not a prime number.", n);
     
     return 0;
     getch();
}