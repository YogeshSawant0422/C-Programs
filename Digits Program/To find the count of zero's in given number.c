//Program to count number of zero in given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0 ,Zcnt = 0, Dig = 0;

    printf("\n Enter a number for count of Zero Digits in it ==>> ");
    scanf("%d",&No);
    Temp = No;

    if(No < 0 )
    {
        printf("\n INVALID NUMBER !!!");return -1;
    }
    while(Temp > 0)
    {
        Dig = Temp % 10;
        if( Dig == 0)
        {
            Zcnt++;
        }
        Temp = Temp /10;
    }
    printf("\n The count of zero digits in number %d = %d",No,Zcnt);
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
