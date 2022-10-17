#include<stdio.h>
#include<conio.h>
int main()
{
   int a=0, b=0, temp=0;
  
   printf("\nEnter the first number: ");
   scanf("%d",&a);
   printf("\nEnter the second number: ");
   scanf("%d",&b);
   
   printf("\nBefore Swaping number : a=%d,b=%d\n",a,b);
   temp=a;
   a=b;
   b=temp;
   printf("\nAfter Swaping number: a=%d,b=%d\n",a,b);
   
   getch();
   return 0;
}