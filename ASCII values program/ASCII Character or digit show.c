// Given Character to convert into ASCII value
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n\tCharacter to ASCII conversion ");
    printf("\n\n Enter the Character to get its ASCII value ==>> ");
    scanf("%c",&ch);// ch = getche(); is also used here

    printf("\n The ASCII value of character %c is =  %d",ch,ch);

    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
