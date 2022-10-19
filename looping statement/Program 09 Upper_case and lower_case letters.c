#include<stdio.h>
#include<conio.h>
int main()
{
  
     char ch;
  
     printf("\nSmall Letters alphabets :\n") ;
     
     for(ch = 'a'; ch <='z'; ch++)
     {
       printf("%c\t", ch);
     }
     
     printf("\n");
     printf("\nCapital Letters alphabets :\n"); 
     
     for(ch= 'A'; ch <='Z'; ch++)
     {
        printf("%c\t", ch);
     }
     
     getch();
     return 0;
}
