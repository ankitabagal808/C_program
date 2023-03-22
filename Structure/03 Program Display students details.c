#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
      int rollno;
      char name [40];
      char city[20];
      float per;
};

int main()
{
      struct student std1, std2;
    
      std1.rollno=65;
      strcpy(std1.name,"Arijit Singh");
      strcpy(std1.city,"Mumbai");
      std1.per=99.956431;
      
      printf("Enter Roll number :");
      scanf("%d",&std2.rollno);
    
      printf("Enter name :");
      scanf(" %[^\n]",&std2.name);
      
      printf("Enter city :");
      scanf(" %[^\n]",&std2.city);
    
      printf("Enter percentage:");
      scanf("%f",&std2.per);
    
      printf("\n 1st student details given are => \n\t Roll no. - %d.\n\t Name - %s. \n\t City - %s \n\t Percentage -%f",std1.rollno,std1.name,std1.city,std1.per);
    
      printf("\n_____________________________________\n");
      
      printf("\n 2nd student details given are => \n\t Roll no. - %d.\n\t Name - %s. \n\t City - %s.\n\t Percentage -%f",std2.rollno,std2.name,std2.city,std2.per);

      getch();
      return 0;
}