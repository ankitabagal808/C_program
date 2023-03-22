#include<stdio.h>
#include<conio.h>

#define PCount 3

void Accept_Products();
void Display_All_Products();

struct Product
{
        int P_id;
        char Name[10];
        float S_price;
        float P_price;
        
};

struct Product P_Cart[PCount] = {};

int main()
{

        Accept_Products();

        printf("\n\n ======================================= \n");

        Display_All_Products();

        getch();
        return 0;
}

void Accept_Products()
{
        int i = 0;

        printf("\n Enter products details\n");

        for(i = 0; i < PCount; i++)
        {
                P_Cart[i].P_id = 101 + i;

                printf("\n* Enter Product ID %d Details - ", i + 101);

                printf("\n\t Enter Product Name = ");
                scanf(" %[^\n]",P_Cart[i].Name);

                printf("\t\tEnter Product Sales Price = ");
                scanf("%f",&P_Cart[i].S_price);

                printf("\t\tEnter Product Purchase Price = ");
                scanf("%f",&P_Cart[i].P_price);

        }

        return;
}

void Display_All_Products()
{
        int i = 0;

        printf("\n All Entered Product Details are => \n");

        for(i = 0; i < PCount; i++)
        {
                printf("\n\t Product ID     = %d", P_Cart[i].P_id);
                printf("\n\t Product Name   = %s", P_Cart[i].Name);
                printf("\n\t Sales Price    = %0.2f", P_Cart[i].S_price);
                printf("\n\t Purchase Price = %0.2f", P_Cart[i].P_price);

                printf("\n\n ======================================= \n");
        }

        return;
}