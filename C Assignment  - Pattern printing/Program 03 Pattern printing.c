#include<stdio.h>
#include<conio.h>

int main()
{
      int c=0, r=0;
      
      for(r=0;r<6;r++)
      {
        for(c=0;c<r;c++)
        {
            printf("%c",(65+c));
        }
        printf("\n");
      }
      
      getch();
      return 0;
}