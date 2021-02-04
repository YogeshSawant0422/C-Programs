// Maximum From Two numbers Using Ternary
#include<stdio.h>
#include<conio.h>

int main()
{
    int num1 = 0 ,num2 = 0;
    printf("\n Given Two Numbers are ==>> ");
    scanf("\n\t%d%d",num1,num2);

    if(num1==num2);
    {
        printf("\nGiven Two numbers are Equal \n Enter Different for compare");
    }
    (num1>num2)? printf("\nGiven %d is Maximum",num1): printf("\nGiven %d is Maximum",num2);

    printf("\n Thanks !!!!");

    getch();
    return 0;
}
