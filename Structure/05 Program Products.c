#include<stdio.h>
#include<conio.h>

struct product  
{
       int P_id;
       char Name[10];
       float S_price;
       float P_price;
};

int main()
{    
       struct product prod;
       prod.P_id = 70;
       strcpy(prod.Name,"Pen");
       prod.S_price = 10;
       prod.P_price = 20;

       printf("\n        Product Details \n");

       printf("\n\t Product ID     = %d", prod.P_id);
       printf("\n\t Product Name   = %s", prod.Name);
       printf("\n\t Sales Price    = %0.2f", prod.S_price);
       printf("\n\t Purchase Price = %0.2f", prod.P_price);

       printf("\n\n ____________________________________\n");
        
       return 0;
}