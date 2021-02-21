// Factorial of given numbers using only for loop
#include<stdio.h>
#include<conio.h>

int main()
{
     int  No =0 ,fact = 0,temp =0;

     printf("\n Enter number for its Factorial == ");
     scanf("%d",&No);

     for(temp = No,fact = 1;temp >0;fact = fact * temp,temp--);

     printf("\n The factorial of  %d = %d",No,fact);

     printf("\n\n Thanks !!!!");

     getch();
     return 0;
}
