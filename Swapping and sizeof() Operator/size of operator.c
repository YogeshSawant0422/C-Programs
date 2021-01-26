// Use of sizeof() Operator
#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;
    char ch = 'Q';

          printf("\n\t size of belows data types in bytes");

    printf("\n size of integer in this program = %d ",sizeof(num));
    printf("\n size of character in this program = %d ",sizeof(ch));

    printf("\n==============================**********===================");
    printf("\n size of float in this program = %d ",sizeof(float));
    printf("\n size of double  in this program = %d ",sizeof(double));
    printf("\n size of long double in this program = %d ",sizeof(long double));
    printf("\n size of long int in this program = %d ",sizeof(long int));


    printf("\n\n Thanks !!!!");

    getch();
    return 0;

}
