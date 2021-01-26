//Sum of numbers till user enter Zero Or Negative Number
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int No =0 ,count = 0 ,sum =0;

    printf("\n\t ======Enter a Numbers for its Summation ( Till user not input 0 / -ve value) ====== ");

    for(count = 1;;count++)
    {
        printf("\n Enter Number %d =",count);

        scanf("%d",&No);
        if(No<=0)
        {
            break;
        }

        sum = sum + No ;
    }

    printf("\n Enter a any key to gets its Summation ...");
    getch();

    system("cls");

    printf("\n The sum of given inputted numbers is = %d",sum);

    printf("\n\n Thanks !!!!!");

    getch();
    return 0;

}
