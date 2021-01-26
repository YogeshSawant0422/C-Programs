// Factorial of given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,fact = 0,Temp = 0;

    printf("\n Enter number for Factorial ==>>");
     scanf("%d",&No);

    for(fact = 1,Temp = No; Temp > 0;Temp--)
    {

        fact = fact * Temp;

    }
      printf("\n factorial of  %d = %d ",No,fact);

    printf("\n\n Thanks !!!");

    getch();
    return 0 ;
}
