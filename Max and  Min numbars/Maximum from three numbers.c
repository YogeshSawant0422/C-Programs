// Maximum from three numbers using else if ladder
#include<stdio.h>
#include<conio.h>

int main()
{
    int no1=0,no2=0,no3=0;
    up:
    printf("\n Enter three integer numbers ==>>");
    scanf("%d%d%d",&no1,&no2,&no3);

    if(no1 == no2 && no2 == no3 && no3==no1)
        {
            printf("\n Given Three numbers are Equal");
            goto up;
        }
    if((no1>no2) && (no1>no3))
    {
        printf("\n The number %d is Maximum",no1);
    }
    else if((no2>no1) && (no2>no3))
    {
        printf("\n The number %d is Maximum",no2);
    }
    else
    {
        printf("\n The number %d is Maximum",no3) ;
    }

    printf("\n\n Thanks!!!!");

    getch();
    return 0;
}
