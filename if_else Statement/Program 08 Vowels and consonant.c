#include<stdio.h>
#include<conio.h>
int main()
{
     char ch;
     
     printf("Enter the character : ");
     scanf("%c",&ch);
   
     if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
     {
        printf("%c is a vowels\n",ch);
     }
     else if(ch>='A'&& ch<='z'|| ch>='a' && ch<='z') 
     {
        printf("%c is consonant\n",ch);
     }  
     else
     {
        printf("\n Special symbol");
     }
     
     getch();
     return 0;
}