#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
   char ch;
   printf("enter the character : ");
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
     printf("\n special symbol");
   }
   return 0;
}