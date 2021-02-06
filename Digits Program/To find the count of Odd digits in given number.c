//Program to count of Odd digits in given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Temp = 0 ,Dig = 0, Ocnt = 0;

    printf("\n Enter a number for count odd digits in it ==>>");
    scanf("%d",&No);
    Temp = No ;

    if(No < 0)
    {
        printf("\n Invalid Number !!!!");return -1;
    }
    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Dig % 2 != 0)
        {
            Ocnt++;
        }
        Temp = Temp /10;
    }
    printf("\n The count of Odd digits in %d number = %d",No,Ocnt);
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
