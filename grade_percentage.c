// grade, percentage//

#include<stdio.h>

int main()
{
    float A, B, C, obtainmarks, totalmarks, percentage, grade;
    printf("enter obtainmarks of students :");
    scanf("%f",&obtainmarks);
    printf("enter totalmarks :");
    scanf("%f",&totalmarks);
    percentage = obtainmarks*100/totalmarks;
    printf("%f", percentage);
    if(percentage>=80)
    printf("\n  The percent is %f then you get'A'grade");
    else if(percentage>=70)
    printf("\n The percent is %f then you get'B'grade");
    else if(percentage>=60)
    printf("\n The percent is %f then you get'C'grade");
    else if(percentage<=60)
    printf("\n The percent is %f then you get 'D'grade'");
    else if(percentage<=35)
    printf("\n The percent is %d then you get'FAIL'grade ");
    return 0;
}
