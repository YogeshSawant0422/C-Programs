// To print the Table of given range (if user gives reverse order number)
#include<stdio.h>
#include<conio.h>

int main()
{
    int RN = 0,CN = 0,No1 = 0, No2 = 0;

    printf("\n Enter first number = ");
    scanf("%d",&No1);
    printf("\n Enter second number = ");
    scanf("%d",&No2);
    printf("***************************************=======================**************************************\n");
   if(No1 < No2)
   {
        for(RN = 1; RN <= 10; RN++)
        {
            for(CN = No1;CN <=No2;CN++)
            {
                printf("\t|%3d|",RN * CN);
            }

            printf("\n");
        }
    }
    else
    {
        for(RN = 1;RN <=10;RN++)
        {
            for(CN = No2 ;CN <=No1;CN++)    //Here user input reverse number but we print it Order manner
                                                                        // if the demand of user as no change then we use  [ for(CN = No1 ; CN >=No2 ; CN--) ]
            {
                printf("\t|%3d|",RN * CN);
            }
            printf("\n");
        }
    }

    printf("*************************************===========================*************************************************");
    printf("\n Thanks !!!!");

    getch();
    return 0;
}
