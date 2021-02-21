//Maximum Of Two Numbers using single Ternary operator
#include<stdio.h>
#include<conio.h>
int main()

{
    int num1=0,num2=0;
    printf("\n Given Two Numbers are ==>>");
    scanf("%d%d",&num1,&num2);

    (num1==num2)?printf("Given Two Numbers Are Equal \n Please Enter Different Two Numbers"):((num1>num2)?printf("\n Given Number %d is Maximum",num1):printf("\n Given Number %d is Maximum",num2));

    getch();
    return 0;
}
