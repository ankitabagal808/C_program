#include <stdio.h>
#include<conio.h>
int main()
{
     int no=0, dcnt=0, temp=0;
     
     up:
     printf("\n Enter positive  number to calculate its digit sum=");
     scanf("%d",&no);
  
     temp=no;
     while(temp>0)
     {
       dcnt++;
       temp=temp/10;
     }
     printf("\n\n Number of digits in given number %d is =%d",no,dcnt);
  
     getch();
     return 0;
}