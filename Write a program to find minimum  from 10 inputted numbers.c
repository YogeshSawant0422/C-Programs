// Write a program to find minimum from 10 inputted numbers.
#include<stdio.h>
#include<conio.h>

int main()
{
            int No = 0, Cnt = 0,Min = 0 ;

            printf("\n Enter  10 inputted numbers to find Minimum value ");

            for(Cnt = 1; Cnt <= 10;Cnt++)
            {
                        printf("\n\t Enter %d number = ",Cnt);
                        scanf("%d",&No);

                        if( Cnt == 1)
                        {
                            Min = No;
                            continue ;
                        }
                        if(No < Min )
                        {
                            Min =No;
                        }
            }
            printf("\n Press any key to find out minimum value ==");
            getch();

            printf("\n The minimum number from given numbers is %d ",Min);

            printf("\n Thanks !!!");

            getch();
            return 0;
}
