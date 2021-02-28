//Create, Accept, Display Array Using Loop - with macro ,
//Find Count of Null (Zero) Elements in that array
#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int Arr[size] = {} , i = 0 , ZCnt = 0 ;

    printf("\n===Accept The Array Element====");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n\nEnter The %d Array Element  = ", i );
        scanf("%d",&Arr[i]);
    }
    printf("\n===Display The Array Element===");

    for( i = 0 ; i < size ; i++)
    {
        printf("\n The %d Array Element Is = %d ", i ,Arr[i]);
    }

    printf("\n Press Any Key To Continue !!! ");
    getch();

    printf("\n\n===The Count Of Null Elements Of Array===");

    for(i = 0 ; i < size ; i++)
    {
        if(Arr[i] == 0)
        {
            ZCnt++;
        }
    }
    printf("\n The Count Of Null Element In That Array Is = %d ",ZCnt);
    getch();
    return 0;
}
