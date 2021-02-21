//Print a hollow program of alphabets
#include<stdio.h>

int main()
{
    int i = 0 , j = 0 , c = 0;
    char ch ='A';
    printf("\n Enter a number for printing hollow of alphabets = ");
    scanf("%d",&c);

    for( i = 1 ; i<=c ; i++)
    {
        for( j = 1 ; j <= c ;j++)
        {
            if( i == 1 )
            {
                printf(" %c ",ch);
                ch++;
            }
            if( i == c )
            {
                printf(" %c ",ch);
                ch++;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}

