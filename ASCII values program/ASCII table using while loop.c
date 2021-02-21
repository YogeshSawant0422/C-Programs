// ASCII table using while
#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0;
    printf("\n\n\tASCII Table ");

    while(no<128)
    {
        printf("\n\t %3d=%c",no,no);
        no++;
    }

    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
