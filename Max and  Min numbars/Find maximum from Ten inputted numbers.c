//Find Maximum from 10 Inputted numbers .cc
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0,Cnt = 0, Max = 0;
    printf("\n\t Enter 10 for getting its maximum number ");

    for(Cnt = 1; Cnt <=10 ; Cnt++)
    {
        printf("\n\n\t Enter  %d number = ",Cnt);
        scanf("%d",&No);

        if(No>Max)
        {
            Max = No;
        }
    }

    printf("\n Press any key to print Maximum number ");
    getch();
    system("cls");

    printf("\n The maximum number = %d ",Max);

    printf("\n\n Thanks !!!!!");
    getch();
}
