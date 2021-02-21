// print message using switch by Another method
#include<stdio.h>
#include<conio.h>

int main()

{
       char ch ='\0';

    printf("\n Enter the character to print message ==>> ");
    ch = getche();
     printf("\n");

    switch(ch)
    {
        case 'A':
        case 'a':
                printf("\n Welcome");
                break;
        case 'B':
        case 'b':
                printf("\n Good Bye");
                break;
        case 'C':
        case 'c':
                printf("\n Have a nice day");
                break;
        case 'D':
        case 'd':
                printf("\n Good Day");
                break;
        default:
                printf("\n Invalid Character ");
                break;
    }
     printf("\n\n Thanks !!!");

        getch();
        return 0;

}
