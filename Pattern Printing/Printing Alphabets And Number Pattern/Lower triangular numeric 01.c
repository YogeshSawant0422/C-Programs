// Alphabets pattern 01
//   1
//   2   3
//   4   5   6
//   7   8   9   10
//  11  12  13 14 15
////////////////////
#include<stdio.h>

int main()
{
    int i = 0 , j = 0 ,c = 0,No = 1;
    printf("\n Enter a number for printing alphabetical pattern  = ");
    scanf("%d",&c);

    for( i = 1 ; i<= c ; i++)
    {
        for( j = 1 ; j<= c ; j++)
        {
            if(i>=j)
            {
                printf(" %-3d ",No);
                No++;
            }
        }
        printf("\n");
    }
    printf("\n Thanks !!!!");
    return 0;
}
