// Program to print Sum of 10 inputted numbers and print Sum separately.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int No = 0,sum =0,count =0;

    printf("\n\t Enter the numbers for its summation ");

     for(count = 1;count <=10 ;count++)
     {
         printf("\n\t Enter Number %d =",count);
         scanf("%d",&No);

         sum = sum + No;
     }
     getch();
     printf("\n Enter any key for Show its summation ");
     getch();
     system("cls");

     printf(" \n The sum of Given 10 Numbers = %d",sum);

     printf("\n\n Thanks!!!");
     getch();
     return 0;
}
