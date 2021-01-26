// To print a table of given range of number (User choose those number)
#include<stdio.h>
#include<conio.h>

int main()
{
    int  RN = 0, CN = 0,No1 = 0,No2 = 0 ;

    printf("\n Enter a 1st number  = ");
    scanf("%d",&No1);
    printf("\n Enter a 2nd number = ");
    scanf("%d",&No2);

    printf("=======================================*****************======================================\n");

     for(RN= 1 ; RN <=10;RN++)
     {
         for(CN = No1 ; CN <= No2; CN++)
         {
             printf("\t|%3d | ",RN * CN);

         }

         printf("\n");
     }
    printf("=========================================***************======================================");

    printf("\n\n Thanks !!!!");

     getch();
     return 0 ;
}
