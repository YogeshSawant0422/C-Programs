//Program to find inputted number is divisible by both 5 & 7  Or only 5 or Only by 7 or not by both 5 & 7
#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0;

    printf("\n Please enter a integer number ==>>\n");
    scanf("%d",&no);

    if((no%5 == 0) && (no%7 == 0))
    {
        printf("\n Given Number %d is Divisible by both 5 and 7",no);
    }
    else if(no%5 ==0)
    {
        printf("\n Given number  %d is Divisible by 5",no);
    }
    else if(no%7 ==0)
    {
        printf("\n Given number  %d is Divisible by 7",no);
    }
    else
    {
        printf("\n Given number  %d is not divisible by both 5 and 7 ",no);
    }

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
