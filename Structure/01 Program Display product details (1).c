#include <stdio.h>
#include<conio.h>

struct Product
{
      int P_Id;
      char P_Name[40];
      float P_Price;
      float S_Price;
};

int main()
{
      int i=0;
      struct Product Prod[2];
      
      printf("\n\n== Accepting Product Details ==\n");
      
      for(i=0;i<2;i++)
      {
          printf("\nEnter Product Id :");
          scanf("%d",&Prod[i].P_Id);
           
          printf("Enter Product Name :");
          scanf(" %[^\n]",&Prod[i].P_Name);
           
          printf("Enter Product Purchase price :");
          scanf("%f",&Prod[i].P_Price);
         
          printf("Enter Product Selling price :");
          scanf("%f",&Prod[i].S_Price);
          
          printf("\n");
      }
     
      printf("\n===============**********==============\n");
      
      printf("\n Display Products Details:");
      
      printf("\n\n===============**********==============\n");
      for(i=0;i<2;i++)
      {
          
           printf("\n%d Products Details =>",i+1);
           
           printf("\n  Id=%d",Prod[i].P_Id);
           printf("\n  Name=%s" ,Prod[i].P_Name);
           printf("\n  Selling price=%f",Prod[i].P_Price);
           printf("\n  Purchase price=%f",Prod[i].S_Price);
           printf("\n");
      }
      
      printf("\n===============********==============\n");
      
      getch();
      return 0;
}