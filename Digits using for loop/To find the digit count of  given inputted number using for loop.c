// Program to find the digit count of  given inputted number using for loop
#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0 ,Temp = 0 ,Dcnt = 0 ;
    printf("\n Enter a number for finding its digit count  ==>> ");
    scanf("%d",&No);

     if(No < 0)
     {
         printf("\n Invalid Number !!!!");return -1;
     }

     for(Temp = No ;Temp > 0;Dcnt++,Temp/=10);

     printf("\n The Count of digits in given number %d = %d ",No ,Dcnt);
     printf("\n\n Thanks !!!!!!");
     getch();
     return 0;
}
