// Write a program to print character A to Y
#include<stdio.h>
#include<conio.h>
int main()

{
    char ch = '\0';

    printf("\n\n\t print a character z to a ");

    for(ch='z';ch>='a';ch--)      // reverse Order z to a AND for a to z =>> for(ch='a';ch<='z';ch++)
    {
        printf("\n\n %c ",ch);
    }
    getch();
    return 0;
}

