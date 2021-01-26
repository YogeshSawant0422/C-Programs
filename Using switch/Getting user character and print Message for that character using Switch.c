//Accept the character from user and print given message using switch()
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n Enter the character to print message ==>> ");
    ch = getche();

    getch();

    switch(ch)
    {
        case 'A':
                printf("\n Welcome");
                break;
        case 'a':
                printf("\n Welcome");
                break;
        case 'B':
                printf("\n Good Bye");
                break;
        case 'b':
                printf("\n Good Bye");
                break;
        case 'C':
                printf("\n Have a nice day");
                break;
        case 'c':
                printf("\n Have a nice day");
                break;
        case 'D':
                printf("\n Good Day");
                break;
        case 'd':
                printf("\n Good Day");
        default:
                printf("\n Invalid Character ");
                break;
    }
     printf("\n\n Thanks !!!");

        getch();
        return 0;

}
