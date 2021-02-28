//Create, Accept, Display Array Using Loop - with macro ,
//Find Count of Even Elements in that array
#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int Arr[size] = {} , i = 0 , ECnt = 0;

    printf("\n ===Accept The Array Element === ");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n\t Enter The %d Element = ", i );
        scanf("%d",&Arr[i]);
    }

    printf("\n ===Display The Array Element =====");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n\n\t The %d Element Of Array Is = %d ", i , Arr[i]);
    }

    printf("\n\nPress any key to continue !!!!");
    getch();

    for( i = 0 ; i < size ;i++)
    {
        if(Arr[i] % 2 == 0)
        {
            ECnt++;
        }
    }
    printf("\n\n The Count Of Even Element In That Array is = %d",ECnt);
    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
