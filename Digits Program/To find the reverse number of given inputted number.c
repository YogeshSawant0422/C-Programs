//To find the Reverse Number of given inputted number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0 ,Dig = 0,Rev = 0;

    printf("\n Enter a number to find its revers number  =>> ");
    scanf("%d",&No);
    Temp = No ;
    if (No < 0)
    {
        printf("\n Invalid Number !!!");return -1;
    }
    while(Temp > 0)
    {
        Dig = Temp % 10;
        Rev = (Rev  * 10) + Dig ;
        Temp = Temp /10;
    }
    printf("\n The Reverse number of  given number %d is = %d ",No ,Rev);
    printf("\n\n Thanks !!!");
    getch();
    return 0;
}
