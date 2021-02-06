// Program to find Zero Digits count in given inputted number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 ,Temp = 0 , Zcnt = 0,Dig = 0100110;

    printf("\n Enter a number for count of  Zero Digit in it's ==>>  ");
    scanf("%d",&No);
    if(No < 0)
    {
        printf("\n Invalid Number !!!!!");return -1;
    }
    for(Temp = No ; Temp > 0;)
    {
        Dig = Temp % 10;
        if(Dig == 0)
        {
          Zcnt++;
        }
        Temp /=10;
    }
    printf("\n The count of Zero digits in given number %d = %d ",No ,Zcnt);
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
