// Find minimum from 10 Inputted number .
#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0 , Cnt = 0 ,Min = 0;

    printf("\n\t Enter 10 inputted number for  finding minimum value ");

    for(Cnt = 1 ; Cnt <=10;Cnt++)
    {
        printf("\n\t Enter %d number = ",Cnt);
        scanf("%d",&No);

        if(Cnt == 1)
        {
            Min = No;
            continue;
        }

        if(No<Min)
        {
            Min = No;
        }
    }

    printf("\n Press any key to find out minimum Number ...");
    getch();

    printf("\n The minimum value of given numbers  is %d ",Min);

    printf("\n\n Thanks !!!!");
    getch();
    return 0 ;
}
