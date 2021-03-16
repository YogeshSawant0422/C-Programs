//Printing Reverse N Pattern
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , i = 0 , j = 0;

    printf("\n Enter A number For Printing Reverse N Pattern = ");
    scanf("%d",&No);

    printf("\n========== Reverse N Pattern =========\n\n");

    for( i = 1 ; i <= No ; i++)
    {
        for( j = 1 ; j <= No ; j++)
        {
            if( j == 1 || j ==No || i + j == No + 1)
            {
               printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n=================Thanks================\n");
    getch();
    return 0;
}
