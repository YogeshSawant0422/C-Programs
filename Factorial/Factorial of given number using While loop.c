//Factorial Of Given Number Using While Loop + for loop + negative And Positive Numbers
#include<stdio.h>
#include<conio.h>

int main()
{
     int  No = 0 , fact = 1 ,temp = 0;

     printf("\n Enter Number for its Factorial ==");
     scanf("%d",&No);
      if(No>0)
      {
             temp = No;
             while( temp >0)
             {
                 fact = temp * fact ;
                 temp--;
             }
     }
    else
    {
         for(temp = No;temp<0;temp++)
         {
             fact = fact * temp;
         }
    }
     printf("\n  The factorial of given number %d is =%d  ",No,fact);

     printf("\n\n Thanks !!!!!");

     getch();
     return 0 ;
}
