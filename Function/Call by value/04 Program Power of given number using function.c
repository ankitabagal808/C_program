#include <stdio.h>
#include<conio.h>
int main()
{
    int  base, expo, pow;
    
    printf("\n Enter base :");
    scanf("%d",&base);
    
    printf("\n Enter exponent :");
    scanf("%d",&expo);
    
    pow=power(base, expo);
    
    printf("\n power of %d ^ %d :%d",base,expo,pow);
    
    return 0;
   
}
int power(int Base, int Expo)
{
  int Pow=1,i=0;
  while(i<Expo)
    {
       Pow=Pow*Base;
       i++;
    }
    return Pow;
}   
    