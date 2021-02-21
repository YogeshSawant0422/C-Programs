// Alphabets pattern 04
//   7
//   14  21
//   28  35 42
//   49  56  63  70
//   77  84  91   98  105
///////////////////////
#include<stdio.h>

int main()
{
    int i = 0 , j = 0 ,c = 0, No = 0 ,Temp = 0;
    No = Temp;
    printf("\n Enter a number for printing alphabetical pattern  = ");
    scanf("%d",&c);

    printf("\n Enter a number for printing its table in pattern  = ");
    scanf("%d",&No);

    for( i = 1 ; i<= c ; i++)
    {
        for( j = 1 ; j<= c ; j++)
        {
            if( i>=j )
            {
                Temp = Temp + No ;
                printf(" %d ",Temp);
                //Temp++;
            }
        }
        printf("\n");
    }
    printf("\n Thanks !!!!");
    return 0;
}
