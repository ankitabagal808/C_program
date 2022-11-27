#include<stdio.h>
#include<conio.h>

int main()
{
       char r, c, count='A';
       
       for(r='A';r<='E';r++)
       {
          for(c='A';c<=r;c++)
          {
             printf("%c",count);
             ++count;
          }
          printf("\n");
       }
       
       getch();
       return 0;
}