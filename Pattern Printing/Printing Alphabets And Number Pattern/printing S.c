#include<stdio.h>

int main()
{
    int i = 0 , j = 0, c = 0;

    printf("\n enter a number = ");
    scanf("%d",&c);

    for( i = 1 ; i <= c ; i++)
    {
        for( j = 1 ; j <= c; j++)
        {
            if( i == 1 || i == c || i == (c +1)/2  || i<= (c/2)+1 && j == 1 || j == c && i>=(c / 2)+1 )
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
    return 0;
}
