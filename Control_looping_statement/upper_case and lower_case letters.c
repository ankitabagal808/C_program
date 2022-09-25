#include<stdio.h>
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
  return 0;
}
