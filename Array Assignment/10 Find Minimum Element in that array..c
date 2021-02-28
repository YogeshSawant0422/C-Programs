//Create, Accept, Display Array Using Loop - with macro ,
//Find Minimum Element in that array.
#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int Arr[size] = { } , i = 0 ,Min = 0;

    printf("\n\t===Accept The Array Element===\n");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n\tEnter The %d Element = ", i );
        scanf("%d",&Arr[i]);
    }

    printf("\n\t===Display Array Element===");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n\t Element of %d Array = %d", i ,Arr[i]);
    }

    printf("\n\n\t Press any key to continue for find minimum element !!!!");
    getch();

    for( i = 0 ; i < size ; i++)
    {
        if(i == 0)
        {
            Min = Arr[i];
            continue;
        }

        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    printf("\n\n Minimum element in that array is = %d",Min);
    printf("\n\n Thanks !!!!");

     getch();
     return 0;
}
