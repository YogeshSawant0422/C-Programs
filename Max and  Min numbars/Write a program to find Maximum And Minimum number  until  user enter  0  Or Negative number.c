// Write a program to find Maximum And Minimum number  until  user enter  0  Or Negative number
#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0 ,Max = 0,Min =  0,Cnt = 1;

       printf("\n\t============== Enter Number for finding Maximum and minimum value [Until user enter 0 or negative value]=============");

       for(;;)
       {
           printf("\n\t Enter number = ");
           scanf("%d",&No);

           if(No <= 0)
           {
              break;
           }
           if(Cnt == 1)
           {
               Min = No ;
               Max = No ;
               Cnt++;
               continue ;
           }
           if(No>Max)
           {
               Max = No;
           }
           if(No < Min )
           {
              Min = No ;
           }
       }

       printf("\n Enter any key to print Minimum and Maximum Number .........");

       getch();
       printf("\n Maximum number is = %d \n",Max );
       printf("\n Minimum number is = %d \n ", Min );

       printf("\n Thanks !!!!!") ;

       getch();
       return 0 ;
}
