#include<stdio.h>
#include<conio.h>
int main()
{
     int a=0, b=0, temp=0;
     
     printf("Enter the first numbers:");
     scanf("%d",&a);
     printf("Enter the second numbers:");
     scanf("%d",&b);
     
     printf("\nBefore swap:a=%d,b=%d\n",a,b);
     temp=a;
     a=b;
     b=temp;
     printf("\nAfter swap:a=%d,b=%d",a,b);
     
     getch();
     return 0;
}