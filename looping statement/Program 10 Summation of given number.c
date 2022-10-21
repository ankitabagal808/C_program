#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
      int no=0, sum=0, cnt=0, num=0;
      printf("\n Enter number which have you:");
      scanf("%d",&num);
      for(cnt=1;cnt<=num;cnt++)
      {
          printf("\n Enter number %d=",cnt);
          scanf("%d",&no);
          sum=sum+no;
      }
      
      printf("\Summation of given numbers= %d",sum);
      
      getch();
      return 0;
}