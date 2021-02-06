//Program to find the sum of digits in given inputted 3 digit Number using for loop
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0 ,Dcnt = 0, Dig = 0,Dsum = 0;

    printf("\n Enter a number for finding its digits sum ==>> ");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid Number !!!!");
        return -1;
    }
    for(Temp = No ;Temp > 0 ;Dcnt++,Temp/=10);

    if(Dcnt ==3)
    {
              for( Temp = No ;Temp > 0;Dig = Temp % 10, Dsum += Dig ,Temp /= 10);

              printf("\n The sum of digits of given Inputted number %d = %d",No,Dsum);
    }
  else
    {
        printf("\n Given number is not 3 digit number ");
    }
    printf("\n\n Thanks !!!!");
    getch();
    return 0;
}
