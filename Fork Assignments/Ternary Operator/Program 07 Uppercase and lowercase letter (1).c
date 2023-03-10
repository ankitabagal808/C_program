#include<stdio.h>
#include<conio.h>
int main() 
{
     char s[0]={};
    
     printf("Enter a character: ");
     scanf("%s",s) ;
    
     char c = s[0];
    
     if (c>= 'a' && c <= 'z') 
     {
       printf("\n The character is a lower-case letter");
     }
     else
     {
       printf("\n The character is upperer-case letter");
     } 
     
     getch();
     return 0;
}
