// Printing Square Of Stars
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
////////////////
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , i = 0 , j = 0;
    printf("\n Enter a number for printing that type of square = ");
    scanf("%d",&No);

    printf("\n ===========Stars Pattern============\n\n\n");

    for( i = 0 ; i < No ; i++)
    {
        for( j = 0 ; j < No ; j++ )
        {
            if( i <= No  || j <= No)
            {
                printf(" * ");
            }

            printf(" ");
        }
        printf("\n\n");
    }
    printf("\n=========!!!!!!!Thanks !!!!!==========");
    getch();
    return 0;
}
