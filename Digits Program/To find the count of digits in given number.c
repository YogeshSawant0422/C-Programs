#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0 ,dcnt = 0 ,Dig = 0 ;

    printf("\n Enter a number to find out its digit count  =>> ");
    scanf("%d",&No);
    Temp = No;
    if(No<0)
    {
        printf("\n Invalid Number ..");return -1;
    }
    while(Temp > 0)
    {
        Dig = Temp % 10;
        dcnt++;
        Temp = Temp / 10;
    }
    printf("\n Count of %d number = %d ",No,dcnt);
    printf("\n\n Thanks !!!");
    getch();
    return 0 ;
}
