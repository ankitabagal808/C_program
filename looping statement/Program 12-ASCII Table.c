// ASCII using for //

#include<stdio.h>
#include<conio.h>

int main()
{
    int val=0;
    
    printf("\n enter the ASCII table : \n");
    
    for(val=0;val<128;val++)
    printf("\n \a enter the ASCII value %c in %d",val,val);
    
    getch();
    return 0;
}
