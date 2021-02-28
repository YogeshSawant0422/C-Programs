//Create, Accept, Display Array Using Loop - with macro ,
//Find Summation of All Element in that array.
#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int Arr[size] = {} , i = 0 ,Sum = 0;

    printf("\n===Accept The Array Element===");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n\tEnter The %d Element = ", i );
        scanf("%d",&Arr[i]);
    }

    printf("\n===Display The Array Element===\n");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n\tThe %d Element Of Array = %d ", i ,Arr[i]);
    }

    printf("\n\n===The Summation Of All Element In the Array===");

    for(i = 0 ; i <size; i++)
    {
        Sum = Sum + Arr[i];
    }

    printf("\n\nThe Summation Of All Element Of Array = %d",Sum);
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
