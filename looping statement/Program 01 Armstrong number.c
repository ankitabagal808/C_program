#include<stdio.h>
#include<conio.h>
int main()
 {
      int num, originalNum, remainder, result = 0;
      printf("Enter a three-digit integer: ");
      scanf("%d", &num);
      
      originalNum = num;
 
      while (originalNum != 0) 
      {
         remainder = originalNum % 10; 
         result += remainder * remainder * remainder;
         originalNum /= 10;
      }
  
      if (result == num)
      {
          printf("\n%d is an Armstrong number.", num);
      }
      else
      {
          printf("\n%d is not an Armstrong number.", num);
      }
      
      getch();
      return 0;
}
