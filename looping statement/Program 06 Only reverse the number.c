#include <stdio.h>
#include <conio.h>
int main()
{
      int  n=0;

      printf("Enter value : ");
      scanf("%d",&n);
    
      while(n>=1)
      {
         printf("%d\n",n);
         n--;
      }
   
      getch();
      return 0;
}
