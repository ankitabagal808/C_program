#include<stdio.h>
#include<conio.h>

int main()
{
      int no = 0,  temp = 0, rev = 0;
      
      printf(" \n Enter 3 digits number :");
      scanf("%d",&no);

      temp = no;

      if(no <= 0)
      {
           printf("\n Invalid number");
           goto down;
      }
      
      while( temp > 0 )
      {
           rev = (rev * 10) + (temp % 10);
           temp = temp / 10;
      }

      printf("\n Reverse of %d is = %d.", no, rev);

      down:
      printf("\n\n Thank you");
      
      getch();
      return 0;
}
