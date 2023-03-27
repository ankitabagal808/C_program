#include<stdio.h>  
#include<conio.h>

int main()    
{    
    int num,sum=0,m;    
    
    printf("Enter a number:");    
    scanf("%d",&num);  
      
    while(num>0)    
    {    
       m = num%10;    
       sum = sum+m;    
       num = num/10;    
    }   
    
    printf("Sum of digits =%d",sum);  
     
    getch();
    return 0;  
}   
