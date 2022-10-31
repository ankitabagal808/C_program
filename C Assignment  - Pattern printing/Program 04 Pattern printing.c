#include<stdio.h>
#include<conio.h>

int main()
{
      int c, r, n=5;
      char ch='A';
     
      for(r=1;r<=n;r++)
      {
        for(c=1;c<=r;c++)
        {
            printf("%c",ch);
        }
        printf("\n");
        ch++;
      }
      
      getch();
      return 0;
}