#include <stdio.h>  
  
int main()  
{  
      int totalrows,m;  
    
      printf("Enter the number of rows :");  
      scanf("%d",&totalrows);
        
      m=totalrows;  
      
      for(int rowno=1;rowno<=totalrows;rowno++)  
      {  
        for(int colno=1;colno<rowno;colno++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        m--;  
     
        printf("\n");  
     }  
     
     getch();
     return 0;  
}


