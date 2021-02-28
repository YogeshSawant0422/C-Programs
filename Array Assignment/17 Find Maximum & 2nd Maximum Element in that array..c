//Create, Accept, Display Array Using Loop - with macro ,
//Find Maximum & 2nd Maximum Element in that array.
#include<stdio.h>
#include<conio.h>

#define size 5

int main()
{
    int Arr[7] = {} , i = 0 ,Max1= 0 ,Max2 = 0;

    printf("\n\t=== Accept The Array Element ===");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n\t Enter The %d Element =  ", i );
        scanf("%d",&Arr[i]);
    }

    printf("\n===Display The Array elements \n");

    for( i = 0 ; i <size ; i++)
    {
        printf("\n\n\t Element Of %d Array = %d", i , Arr[i]);
    }

    printf("\n Press Any To Continue !!!!\n");
    getch();

    for( i = 0 ; i < size ; i++)
    {
        if( i == 0)
        {
            Max1 = Arr[i];
            continue;
        }
        if(Arr[i] > Max1)
        {
            Max1 = Arr[i];
        }
    }
     for( i = 0 ; i < size ; i++)
    {
        if(Arr[i] >Max2 && Arr[i] < Max1)
        {
            Max2 = Arr[i];
        }
    }
    printf("\n The 1st Maximum Element In That Array = %d ",Max1);
    printf("\n The 2nd Maximum Element In That Array = %d ",Max2);

    printf("\n\n Thanks !!!!!");
    getch();
    return 0;
}
