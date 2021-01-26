// Write a Table of given Number in Sequence order
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 ,cnt = 0;

    printf("\n Enter a number for create its Table ==>>");
    scanf("%d",&No);

    for(cnt = 1;cnt<=10;cnt++)
    {
        printf("\n\t %3d",(No*cnt));
    }

    getch();
    printf("\n");

     for(cnt = 10;cnt>=1;cnt--)
    {
        printf("\n\t %3d",(No*cnt));
    }
    getch();

    for(cnt = 1;cnt<=10;cnt++)
    {
        printf("\n\t %3d *%3d = %3d",No,cnt,(No * cnt));
    }
      getch();

    printf("\n\n Thanks!!!!");

    getch();
    return 0;
}
