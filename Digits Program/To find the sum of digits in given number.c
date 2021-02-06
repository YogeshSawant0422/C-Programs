//To find the Sum of digits in given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Dsum = 0 ,Dig = 0,Temp = 0 ;

    printf("\n Enter a number to find the Sum of digits in it  = ");
    scanf("%d",&No);
     Temp = No ;
    if(No < 0 )
    {
        printf("\n Invalid Number"); return -1;
    }
    while(Temp > 0)
    {
        Dig = Temp % 10;
        Dsum = Dsum + Dig ;
        Temp = Temp /10 ;
    }
    printf("\n The sum of the given digits in %d  is = %d ",No,Dsum);

    printf("\n Thanks !!!!");
    getch();
    return 0;
}
