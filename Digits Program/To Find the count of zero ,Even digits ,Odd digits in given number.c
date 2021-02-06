//Program to count zero ,Even digits ,Odd digits in given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 ,Temp = 0 ,Dig = 0 ,Zcnt = 0 ,Ecnt = 0,Ocnt = 0;

    printf("\n Enter a number for find count of Zero Digits , Even Digits and  Odd Digits in given number ==>> ");
    scanf("%d",&No);
     Temp = No ;
    if(No < 0)
    {
        printf("\n Invalid Number !!!!!");return 0;
    }
    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Dig == 0)
        {
            Zcnt++;
        }
        if(Dig % 2 == 0 && Dig != 0)
        {
            Ecnt++;
        }
        if(Dig % 2 != 0)
        {
            Ocnt++;
        }
        Temp = Temp /10;
    }
    printf("\n In the above number %d\n ",No);
    printf("\n The Count of Zero Digit = %d\n",Zcnt);
    printf("\n The Count of Even Digits = %d\n ",Ecnt);
    printf("\n The Count of Odd Digits = %d\n ",Ocnt);
    printf("\n\n Thanks !!!");
    getch();
    return 0;
}
