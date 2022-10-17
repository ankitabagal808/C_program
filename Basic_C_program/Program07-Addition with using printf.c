#include <stdio.h>
#include<conio.h>
int main()
{
    int  Addition=0,N1=0,N2=0;
    
    printf("Enter first number :");
    scanf ("%d",&N1);
    printf("Enter second number :");
    scanf ("%d",&N2);
    Addition=N1+N2;
    printf("\n Addition of %d and %d  = %d",N1,N2,Addition);
    
    getch();
    return 0;
}
