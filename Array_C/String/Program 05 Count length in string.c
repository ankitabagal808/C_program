#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char cSrc[50]={};
    int len=0;
   
    puts("\n Enter a string");
    gets(cSrc);
   
    len= strlen(cSrc);
   
    printf("Length of given numbers is =%d",len);
   
    getch();
    return 0;
}