//Program to find reverse number from given inputted number using for loop
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 ,Temp = 0,RevNo = 0,Dig = 0;
     printf("\n Enter the number for getting its revers digit number ==>> ");
     scanf("%d",&No);
     if(No < 0)
     {
         printf("\n Invalid Number !!!!");return 0;
     }

      for(Temp = No ;Temp > 0;Dig = Temp %10,RevNo = (RevNo * 10 ) + Dig,Temp/=10);

     printf("\n The reverse digit of given number %d = %d ",No ,RevNo);
     printf("\n\n Thanks !!!!");
     getch();
     return 0;
}
