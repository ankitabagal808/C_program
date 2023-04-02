#include<stdio.h>
#include<conio.h>

int main() 
{
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    Fact(num);
    
    return 0;
}
 
int Fact(int no)
{
    int factorial = 1,i;
    
    if (no < 0)
    {
        printf("You entered invalid number.");
    }
    else 
    {
        for (i = 1; i <= no; ++i) 
        {
            factorial *= i;
        }
        printf("Factorial of %d = %d",no, factorial);
    }
}