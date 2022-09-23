#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Compiler version gcc  6.3.0

int main()
{
   int No=0, Sum=0, Cnt=0,Num=0;
   printf ("Enter number which you have you :");
   scanf("%d",&Num);
   for (Cnt=1;Cnt<=Num;Cnt++)
   {
       printf("\n\t Enter number %d=",Cnt);
       scanf("%d",&No);
       Sum=Sum+No;
   }
   printf("\n Summation of given numbers=%d",Sum);
   
   return 0;
}
