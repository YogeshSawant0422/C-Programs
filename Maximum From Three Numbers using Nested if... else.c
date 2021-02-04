// Maximum From three numbers using Nested if else
#include<stdio.h>
#include<conio.h>

int main()
{
    int num1 = 0,num2 = 0,num3 = 0;

    printf("\n Enter Three Integer Numbers ==>>>");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1== num2 && num1 == num3 && num2 == num3)
    {
        printf("\n Given Three Numbers are equal");
        goto down;
    }
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("\n The given number %d Is Maximum",num1);
        }
        else
        {
            printf("\n The given number %d is Maximum",num3);
        }
    }
    else if(num2>num3)
    {
        printf("\n The given number %d is Maximum ",num2);
    }
    else
    {
        printf("\n The given number %d is Maximum ",num3);
    }

    down:
    printf("\n\n Thanks !!!1");

    getch();
    return 0;

}
