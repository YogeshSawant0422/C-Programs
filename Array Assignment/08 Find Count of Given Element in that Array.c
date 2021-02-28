//Create, Accept, Display Array Using Loop - with macro ,
//Find Count of Given Element in that Array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

int main()
{
    int Arr[size] = {} , i = 0 , Src_Element = 0 ,Cnt  = 0;

    printf("\n ===Accept Array===");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n\t Enter %d Element = ", i );
        scanf("%d",&Arr[i]);
    }

    printf("\n === Display The Array Element ===");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n\n\t Element Of %d Array =%d ", i , Arr[i]);
    }

    printf("\n\n\tPress any key to Continue !!!");
    getch();

    system("cls");

    printf("\n=== Search Element For Count Of Its Element ===");

    printf("\n\tSearch The Element Of That Array = ");
    scanf("%d",&Src_Element);

    for( i = 0 ;i < size ; i++)
    {
        if(Arr[i]==Src_Element)
        {
            Cnt++;
        }
    }

    printf("\n The Count Of %d Element In That Array = %d ",Src_Element , Cnt);

    getch();
    return 0;
}
