#include<stdio.h>
#include<conio.h>

int main()
{
     int cnt=0 ;
     
     printf("\n Enter a positive number=");
     scanf("%d",&cnt);
     
     fib(cnt);
     
     getch();
     return 0;
}

void fib(int no)
{
     int n1=1, n2=0, n3=0;
     if(no<=0)
     {
        printf("\n You entered invalid number.\n");
        return -1;
     }
     printf("\n Fibonacci Series is:",no);
     
     while(no>0)
     {
        printf("%d\t",n3);
        n3=n1+n2;
        n1=n2;
        n2=n3;
        no--;
     }
}    