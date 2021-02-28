//Create, Accept, Display Array Using Loop - with macro ,
//Find Maximum & Minimum Element in that array.
#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int Arr[size] = { }, i = 0, Min = 0 , Max = 0 ;

    printf("\n===Accept The Array Element ====");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n Enter %d element of array = ", i );
        scanf("%d",&Arr[i]);
    }

    printf("\n===Display The Array Element===");

    for( i = 0 ; i < size ;i++)
    {
        printf("\n The %d element of array is = %d ", i , Arr[i]);
    }

    printf("\n press any key to continue !!!!");
    getch();

    for( i = 0 ; i < size ; i++)
    {
        if( i == 0)
        {
            Max = Arr[i];
            Min = Arr[i];
            continue;
        }
        if(Arr[i] > Max)
        {
            Max  = Arr[i];
        }
         if(Arr[i] < Min)
         {
             Min = Arr[i];
         }
    }

    printf("\n\n Maximum element in that array is = %d",Max);
    printf("\n\n Minimum element in that array is = %d",Min);

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
