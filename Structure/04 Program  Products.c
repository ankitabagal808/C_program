#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct product
{
        int P_id;
        char Name[20];
        float S_price;
        float P_price;
};

int main()
{
        struct product obj = {15, "Pen", 25, 20};

        printf("\n       Product Details \n");

        printf("\n\t Product ID     = %d", obj.P_id);
        printf("\n\t Product Name   = %s", obj.Name);
        printf("\n\t Sales Price    = %0.2f",obj.S_price);
        printf("\n\t Purchase Price = %0.2f",obj.P_price);

        printf("\n\n ___________________________________\n");

        getch();
        return 0;
}
