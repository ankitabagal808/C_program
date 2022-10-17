#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
    
    printf("Enter an number :");
    scanf("%d",&num);
  
    (num%2==0)?
    printf ("\nThe number is even %d",num):printf("\nThe number is odd %d",num);
    
    getch();
    return 0;
}