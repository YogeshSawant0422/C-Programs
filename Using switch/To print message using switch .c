// Accept the character from user and print given message using if else..
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n Enter the character to print given message ==>>  ");
    ch = getche();
    printf("\n");
    if(ch =='A' || ch == 'a')
    {
        printf("\nWelcome");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("\n Good Bye");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("\n Have a nice day");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("\n Good Day");
    }
    else
    {
        printf("\n Invalid Character");
    }
     printf("\n\n Thanks !!!!");

     getch();
     return 0;


}
