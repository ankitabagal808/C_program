#include <stdio.h>
int main()
{
   int num;
   printf("\n Enter number :");
   scanf("%d",&num);
   if(num==0)
   {
      printf("\n Zero number is neutral");
   }
   else if(num%2==0)
   {
      printf("\n number is even");
   }
   else
   {
      printf(" number is odd\n");
   }
   printf("\n\t\tTHANK YOU");
   return 0;
}