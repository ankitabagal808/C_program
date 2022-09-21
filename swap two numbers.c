#include <stdio.h>
void swap(int*, int*);
int main()
{
  int x, y;
  printf("\n The value for x and y:");
  scanf ("%d%d" ,&x, &y);
  printf("\n The value before swapping is x=%d,y=%d",x,y);
  swap(&x, &y);
  printf("\n The value after swapping is x=%d,y=%d",x,y);
  return 0;
}
void swap(int*x, int*y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}