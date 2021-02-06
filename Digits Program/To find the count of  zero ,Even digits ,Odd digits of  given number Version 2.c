//Program to count zero ,Even digits ,Odd digits in given number Version 2
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0 ,Dig = 0 ,Zcnt = 0,Ecnt = 0 ,Ocnt = 0;

    printf("\n Enter a number for count Zero Digits ,Even Digits ,Odd Digits in it ==>> ");
    scanf("%d",&No);
    Temp = No ;
    if(No < 0)
    {
        printf("\n Invalid Number !!!");return -1;
    }
    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Dig == 0)
        {
            Zcnt++;
        }
        else if(Dig % 2 == 0)
        {
            Ecnt++;
        }
        else
        {
            Ocnt++;
        }
        Temp = Temp /10;
    }
    printf("\n The Count of Zero digits in %d = %d\n",No ,Zcnt);
    printf("\n The count of Even Digits in %d = %d\n",No,Ecnt);
    printf("\n The Count of  Odd Digits in %d = %d\n",No,Ocnt);
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
