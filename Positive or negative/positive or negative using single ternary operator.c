//positive or negative using single ternary operator
#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("\n Enter integer number ==>>");
    scanf("%d",&num);

    (num==0)? printf("\n Given number %d is Neutral",num):((num>0)? printf("\n Given number %d is positive",num):printf("\n Given number %d is Negative",num));

     printf("\n Thanks!!!");

     getch();
     return 0;
}
