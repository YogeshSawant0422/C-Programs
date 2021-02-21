// Even odd using single ternary  operator
#include<stdio.h>
#include<conio.h>

int main ()
{
    int no = 0;

    printf("\n Enter an integer number ==>> ");
    scanf("%d",&no);

    (no==0)? printf("\n Given number is neutral "):((no%2 == 0)? printf("\n Given number is even"):printf("\n Given number is Odd"));

    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
