//Program to count even digits in given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0 ,Dig = 0 ,Ecnt = 0;

    printf("\n Enter a number for count of even digits in it ==>> ");
    scanf("%d",&No);
    Temp = No;
    if( No < 0 )
    {
        printf("\n Invalid Number !!!");return -1;
    }
    while(Temp > 0)
    {
        Dig = Temp % 10;
        if( Dig % 2 == 0)     // Here we not put the 0 digit is Even so for that ==>> if(Dig % 2 == 0 && Dig !=0)
        {
            Ecnt++;
        }
        Temp = Temp / 10;
    }
    printf("\n The count of Even digits in %d number = %d ", No ,Ecnt);
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
