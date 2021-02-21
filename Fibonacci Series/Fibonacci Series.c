// fibonacci   series
#include<stdio.h>
#include<conio.h>

int main()
{
    int  No1 = 1 ,No2 = 0,No3 = 0,temp = 0;

    printf("\n Enter a number for its Fibonacci Series = ");
    scanf("%d",&temp);

    for(No1 = 1; temp > 0;temp --)
    {
       printf("\t%d",No3);
       No3 = No1+No2;
       No1=No2;
       No2=No3;
    }
    printf("\n\n Thanks !!!");
    getch();
    return 0;
}
