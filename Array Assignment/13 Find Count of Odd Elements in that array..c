//Create, Accept, Display Array Using Loop - with macro ,
//Find Count of Odd Elements in that array.
#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int Arr[size] = {} , i = 0 , Ocnt = 0;

    printf("\n ===Accept The Array Element===");

    for( i = 0 ; i < size ;i++)
    {
        printf("\n\t Enter %d Element Of Array =  ", i );
        scanf("%d",&Arr[i]);
    }

    printf("\n===Display The Array element ====\n");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n The %d Array Element = %d ", i , Arr[i]);
    }
    printf("\n\n\t Press any key to continue !!!!");

    getch();

    printf("\n\n === Count of odd elements in that array ===");

    for(i = 0 ; i < size ; i++)
    {
        if(Arr[i] %2 != 0)
        {
            Ocnt++;
        }
    }
    printf("\n\n The Count Of Odd Elements In that Array = %d ",Ocnt);

    getch();
    return 0;
}
