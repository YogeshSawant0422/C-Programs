// To print the Table of given numbers in given rang
#include<stdio.h>
#include<conio.h>

int main()
{
     int CN = 0 , RN = 0;

     printf("\n Enter the number range for its Table  ==");
     scanf("%d%d",&CN,&RN);

     for (RN = 1;RN <10;RN++)
     {
         for(CN = 5 ;CN<12;CN++)
         {
             printf("%d * %d",RN *CN);
         }

         printf("\n Thanks !!!!");

         getch();
         return 0;
     }
}
