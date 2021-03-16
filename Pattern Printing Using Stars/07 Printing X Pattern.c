//Printing X Pattern
#include<stdio.h>
#include<conio.h>

int main()
 {
     int No = 0 , i = 0 , j = 0;

     printf("\n Enter A Number For Printing X Pattern = ");
     scanf("%d",&No);

     printf("\n============ X Pattern ================\n\n");

     for( i = 1 ; i<= No ; i++)
     {
         for( j = 1 ; j<=No; j++)
         {
             if( i + j == No +1 || i == j)
             {
                 printf(" * ");
             }
             else
             {
                 printf("   ");
             }
         }
         printf("\n");
     }

     printf("\n================Thanks===============");
     getch();
     return 0 ;
 }
