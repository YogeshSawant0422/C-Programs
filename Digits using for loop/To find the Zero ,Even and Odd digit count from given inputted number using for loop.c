//Program to find Zero digit count ,Even digit count ,Odd digit count from given inputted number using for loop
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Temp = 0,Zcnt = 0 ,Ecnt = 0,Ocnt = 0,Dig = 0;

    printf("\n Enter a number to find its zero ,even and odd digits count ==>>");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid Number !!!!");return -1;
    }
    for(Temp = No ;Temp > 0;)
    {
        Dig = Temp % 10 ;
        if(Dig == 0)
        {
            Zcnt++;
        }
        if(Dig % 2 == 0 && Dig != 0)
        {
            Ecnt++;
        }
        if(Dig % 2 == 1)
        {
            Ocnt++;
        }
        Temp /=10;
    }
    printf("\n The Count of zero digits in given number %d = %d ",No ,Zcnt);
    printf("\n\n The count of Even digits in given number %d = %d ",No ,Ecnt);
    printf("\n\n The count of add digits in given number %d = %d ",No,Ocnt);

    printf("\n\n Thanks !!!");
    getch();
    return 0 ;
}
