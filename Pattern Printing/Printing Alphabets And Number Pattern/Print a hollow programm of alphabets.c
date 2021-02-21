//print  hollow program of alphabets
//      A   B   C   D   E
//      A                    E
//      A                    E
//      A                    E
//      A   B   C   D   E
/////////////////////////////////
#include<stdio.h>

int main()
{
    int i = 0 , j = 0 , c = 0;
    char ch = '\0';
    printf("\n Enter a number for printing a hollow alphabets patter = ");
    scanf("%d",&c);

    for( i = 1 ; i <= c ;i++)
    {
        for(ch = 'A', j = 1 ; j <= c ;j++,ch++)
        {
            if( i == 1 || j == c || i == c || j == 1)
            {
                printf(" %c ",ch);
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
