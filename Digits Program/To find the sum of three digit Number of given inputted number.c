//Program to calculate digit sum for  3 Digit Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0 , Dsum = 0 , Dig = 0 , Dcnt = 0;

    printf("\n Enter a  number for its digit sum ==>>");
    scanf("%d",&No);

    Temp = No;

    if( No < 0)
    {
        printf("\n Invalid Number !!!");return -1;
    }
    while(Temp > 0)
    {
         Dig = Temp % 10;
         Dcnt++;
        Temp = Temp/10;
    }
    if(Dcnt == 3)
    {
         Temp = No;

        while(Temp > 0)
        {
              Dig = Temp % 10;
              Dsum = Dsum + Dig ;
              Temp = Temp / 10;
        }
        printf("\n The Sum of  digits in given number %d = %d",No ,Dsum );
    }
    else
    {
        printf("\n Given inputted number is not 3 Digit number");
    }

    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}

