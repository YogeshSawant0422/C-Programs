//Swapping of Two numbers.
#include<stdio.h>
#include<conio.h>

int main()
{
    int no1 = 0,no2 = 0,tmp = 0;

    printf("\n Enter two numbers for swapping ==>>");
    scanf("%d%d",&no1,&no2);

    printf("\n Before swapping the first number = %d",no1);
    printf("\n Before swapping the second number = %d",no2);

    tmp=no1;
    no1=no2;
    no2=tmp;

    printf("\n After swapping the first number = %d",no1);
    printf("\n After swapping the second number = %d",no2);

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}
