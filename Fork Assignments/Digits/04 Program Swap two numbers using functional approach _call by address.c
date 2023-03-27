#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2;

    printf("Enter First Value to Swap  = ");
    scanf("%d", &num1);
    printf("Enter Second Value to Swap = ");
    scanf("%d", &num2);

    printf("\nBefore Swapping: num1 = %d  num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After Swapping : num1 = %d  num2 = %d\n", num1, num2);
     
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
