#include <stdio.h>
#include<conio.h>
int main()
{
    char cSrc[50]={'\0'};
    int i=0;
    
    puts("\n Enter a string :");
    gets(cSrc);
    
    while(cSrc[i]!='\0')
    {
       if(cSrc[i]>='A'  && cSrc[i]<='Z')
       {
          cSrc[i]=cSrc[i]+32;
       }
       i++;
    }
    
    printf("\n string is= %s",cSrc); 
   return 0;
}
