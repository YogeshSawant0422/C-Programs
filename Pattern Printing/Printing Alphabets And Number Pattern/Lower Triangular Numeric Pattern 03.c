// Lower Triangular Numeric Pattern
//  15
//   20  25
//    30  35   40
//    45   50    55   60
//     65   70    75    80    85
/////////////////////////
#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , c =0,No = 0,Cnt = 0;

    printf("\n Enter  a number  for printing numeric pattern = ");
    scanf("%d",&c);

    printf("\n Enter a starting  Number = ");
    scanf("%d",&No);

    printf("\n Enter a number which is increment   =  ");
    scanf("%d",&Cnt);

    for( i = 1 ; i<=c ; i++)
    {
        for( j = 1 ; j<=c ; j++)
        {
            if( i>=j)
            {
                printf(" %-3d ",No);
                No = No + Cnt;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n\n Thanks  !!!!");
    getch();
    return 0 ;
}
