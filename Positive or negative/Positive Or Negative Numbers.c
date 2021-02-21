// Given Number is Positive or Negative using if else
#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;
    up:
    printf("\n Enter integer number ==>");
    scanf("%d",&num);

    if(num==0)
    {
        printf("\n Given Number %d is neutral",num);
        goto up;
    }
    if(num>0)
    {
        printf("\n Given number %d is positive",num);
    }
    else
    {
        printf("\n Given Number %d is negative",num);
    }

    printf("\n Thanks !!!!");

    getch();
    return 0;
}
