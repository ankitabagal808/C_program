#include<stdio.h>
#include<conio.h>

int main() 
{
    int num, i;
    
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("You entered invalid number.");
    }
    else 
    {
        for (i = 1; i <= num; ++i) 
        {
            fact *= i;
        }
        printf("Factorial of %d = %ull", num, fact);
    }

    return 0;
}