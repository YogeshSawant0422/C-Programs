// ASCII Table
#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0;

    printf("\n\n\t\t ASCII TABLE");

    for(no=0;no<128;no++)
    {
        printf("\n\t\t%d=%c",no,no);
    }

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}
