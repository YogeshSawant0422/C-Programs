//printing I pattern
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , i = 0 , j = 0 ;

    printf("\n Enter A Number For Printing I Pattern = ");
    scanf("%d",&No);

    printf("\n============ I Pattern=============\n\n");

    for( i = 1; i <=No; i++)
    {
        for( j = 1; j<=No;j++)
        {
            if(i == 1 || i== No || j == (No +1)/2)
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
    printf("\n ============ Thanks ============");
    getch();
    return 0;
}
