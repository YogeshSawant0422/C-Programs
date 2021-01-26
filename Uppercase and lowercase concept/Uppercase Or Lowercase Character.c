//Program to check Given character is uppercase or lowercase
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n Enter the to Check whether it is  uppercase or lowercase ==>>");
    ch = getche();

    if((ch >'A') && (ch < 'Z'))
    {
        printf("\n Given character is Uppercase Letter");
    }
    else
    {
        printf("\n Given character is in Lowercase Letter");
    }

    printf("\n\n Thanks !!!!");

    getch();
    return 0;

}
