#include<stdio.h>
#include<conio.h>
int main() 
{
    int n1, n2, n3;
    
    printf("\n Enter first number :");
    scanf("%d",&n1);
    printf("\n Enter first number :");
    scanf("%d",&n2);
    printf("\n Enter first number :");
    scanf("%d",&n3);
    
    if(n1>n2 && n1>n3)
    {
       printf("\n%d is maximum number in given numbers.",n1);
    }
    else if(n2>n1 && n2>n3)
    {
       printf("\n%dis maximum number in given numbers.",n2);
    }
    else if(n3>n1 && n3>n2)
    {
       printf("\n%dis maximum number in given numbers.",n3);
    }
    else
    {
      printf("\n Invalid number.");
    }
    
    getch();
    return 0;
}