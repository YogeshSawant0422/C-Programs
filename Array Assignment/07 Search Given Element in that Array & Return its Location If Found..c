// Create, Accept, Display Array Using Loop - with macro ,
//Search Given Element in that Array & Return its Location If Found.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

int main()
{
    int Arr[size] = {} , i = 0 , Src_Element = 0;

    printf("\n === Accept Elements For Array ===");

    for( i = 0 ; i < size ;i++)
    {
        printf("\n\t Enter  %d Element = ", i );
        scanf("%d",&Arr[i]);
    }

    printf("\n === Display The Array Element ===");

    for(i = 0 ; i < size ; i++)
    {
        printf("\n\n\t Element of %d is = %d ",i ,Arr[i]);
    }

    printf("\n\n Press any key to continue !!!");
    getch();
    system("cls");

    printf("\n ===Search The Element And Return its Location ===");

    printf("\n\t Searching Element = ");
    scanf("%d",&Src_Element);

    for( i = 0 ; i < size ; i++)
    {
        if(Arr[i] == Src_Element)
        {
            break ;
        }
    }

    if( i < size)
    {
        printf("\n\tThe given element %d is in that array and it is fount at %d location ",Src_Element , i +1);
    }
    else
    {
        printf("\n The given element %d is not found in array ",Src_Element);
    }

    getch();
    return 0;
}

