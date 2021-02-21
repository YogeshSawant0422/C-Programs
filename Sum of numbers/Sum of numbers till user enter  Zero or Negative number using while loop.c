// Sum of numbers till user enter 0 / -ve number using while loop
#include<stdio.h>
#include<conio.h>

int main()
{
     int No = 0,sum = 0,count=1;

    printf("\n\t Enter a numbers for its summation(till user enter 0 /-ve number )\n");


    up:
        printf("\n Enter number %d =",count);
        scanf("%d",&No);
        if(No <= 0)
        {
            goto out;
        }

        sum = sum + No ;
        count++;

        goto up;

    out:

    Printf("\n Press any key for Summation ");
    getch();

    printf("\n The summation of given numbers is %d",sum);

    printf("\n\nThanks !!!");

    getch();
    return 0 ;
}
