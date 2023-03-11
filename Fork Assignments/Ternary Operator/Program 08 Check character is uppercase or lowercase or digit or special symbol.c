#include<stdio.h>
#include<conio.h>
int main() 
{
     char s[0]={};
     
     printf("\nEnter a character: ");
     scanf("%s",s) ;
    
     char c = s[0];
    
     if (c>= 'a' && c<= 'z') 
     {
       printf("\n The character is a lower-case letter");
     }
     else if(c>='A' && c<='Z' )
     {
       printf("\n The character is upperer-case letter");
     } 
     else if(c>='0' && c<='9')
     {
        printf("\n You entered digit. ");
     }
     else
     {
       printf("\n You entered special symbol.");
     }
     
     getch();
     return 0;
}
