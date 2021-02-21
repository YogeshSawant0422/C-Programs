// Swapping of two numbers 2nd method.
#include<stdio.h>
#include<conio.h>

int main()

{
    int no1 = 0,no2 =  0,tmp = 0; // if we get two variables then it is also possible to swap with this method  like

                                                                                          //no1 = no1+no2;
                                                                                          //no2 = no1 - no2;
                                                                                          //no2 = no1 -no2;

    printf("\n Enter two numbers for swapping ==>> ");
    scanf("%d%d",&no1,&no2);

    printf("\n Before swapping first number =%d",no1);
    printf("\n Before swapping second number =%d",no2);

    tmp =no1+no2;
    no1 =tmp - no1;
    no2 =tmp - no1;

    printf("\n After swapping first number =%d",no1);
    printf("\n After swapping second number =%d",no2);

    printf("\n\n Thanks !!!!");

    getch();
    return 0 ;
}
