// Create, Accept, Display Array Using Loop - with macro ,
//Find Count of Even & Odd & Zero Elements in that array.
#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int Arr[size] = {} , i = 0 , ECnt = 0 , OCnt = 0 , ZCnt = 0 ;

    printf("\n===Accept The Array Element===");

    for( i = 0 ; i < size ; i++)
    {
        printf("\nEnter The %d Element = ", i );
        scanf("%d",&Arr[i]);
    }
    printf("\n\n===Display The Array Element===\n");

    for(i = 0 ; i < size ; i++)
    {
        printf("\n The %d Element of Array = %d ", i ,Arr[i]);
    }

    printf("\n\n===The Count Of Even , Odd , Zero Elements In The Array===");

    for( i = 0 ; i < size ; i++)
    {
        if(Arr[i] == 0)
        {
            ZCnt++;
        }
        if(Arr[i] %2 == 0 && Arr[i] != 0)
        {
            ECnt++;
        }
        if(Arr[i] %2 == 1)
        {
            OCnt++;
        }
    }

    printf("\n\n The Count Of Zero Element Of That Array Is = %d",ZCnt);
    printf("\n\n The Count Of Even Element Of That Array Is = %d",ECnt);
    printf("\n\n The Count Of Odd  Element Of That Array Is = %d",OCnt);

    printf("\n\n\tThanks !!!");
    getch();
    return 0;
}
