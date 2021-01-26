// even odd using ternary
#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0;
    //yogi:
    printf("\n Enter an integer number ==>>");
    scanf("\n%d",&no);

    /*if(no == 0)
    {
        printf("\n Given Number is neutral");
        goto yogi;
    }*/

    (no%2==0)? printf("\n Given number %d is even",no):printf("\n Given number %d is odd",no);

    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
