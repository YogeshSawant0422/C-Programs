//Program to find digit sum of given inputted number using for loop
#include<stdio.h>
#include<conio.h>

int main()
{
   long int No = 0, Temp = 0 ,Dsum = 0 ,Dig = 0;

    printf("\n Enter a number for finding its digit sum ==>> ");
    scanf("%d",&No);
                                              //In while Loop ==> Temp = No;
    if(No < 0)
    {
        printf("\n invalid number !!!");
        return -1;
    }

      for( Temp = No ; Temp > 0 ;Dig = Temp % 10,Dsum = Dsum + Dig ,Temp = Temp / 10 );          //In while loop
                                                                                                                                                                     //while(Temp > 0)
                                                                                                                                                                    //  {     Dig = Temp % 10;
                                                                                                                                                                    //         Dsum = Dsum + Dig;
                                                                                                                                                                    //         Temp = Temp /10;
                                                                                                                                                                   //    }
    printf("\n The sum of digits in given number %d = %d",No ,Dsum);
    printf("\n\nThanks !!!!");
    getch();
    return 0;
}
