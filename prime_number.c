#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int a, b, i, flag;
    printf("Enter start value:");
    scanf("%d",&a);
    printf("enter end value:");
    scanf("%d",&b);
    printf(" prime numbers between %d and %d :",a,b);
    while(a<b)
    {
      flag=0;
      for(i=2;i<=a/2;++i)
      {
        if(a%i==0)  
        {
           flag=1;
        break;
        }
      }
      if(flag==0)
    printf("%d\t",a);
    ++a;
    }
     return 0;
}