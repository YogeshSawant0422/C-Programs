// Printing Reverse Z Pattern
#include<stdio.h>#include<conio.h>

int main()
{
    int No = 0 , i = 0 , j = 0;

    printf("\n Enter A Number For Printing Reverse Z Pattern = ");
    scanf("%d",&No);

    printf("\n========= Reverse Z Pattern ==========\n\n");

    for( i = 1 ; i<= No ; i++)
    {
        for( j = 1 ; j<= No ; j++)
        {
            if(i==1 || i == No || i == j )
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

    printf("\n========= !!!! Thanks !!!! ================");

    getch();
    return 0;
}

