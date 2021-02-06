//Program to check given number is palindrome or not .
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0 ,Rev = 0,Dig = 0;

    printf("\n Enter a number to find it is palindrome or not == >> ");
    scanf("%d",&No);
    Temp = No ;
    if(No < 0)
    {
        printf("\n Invalid Number !!!");return -1;
    }

    while(Temp > 0)
    {
        Dig = Temp % 10;
        Rev =(Rev * 10)+Dig;
        Temp = Temp /10;
    }
    printf("\n The revers number of given %d number = %d ",No ,Rev);
    if(No == Rev )
    {
        printf("\n\n As %d = %d ",No ,Rev);
        printf("\n\n Given Inputted Number %d Is Palindrome ");
    }
    else
    {
        printf("\n\n As %d != %d ",No ,Rev);
        printf("\n\n Given inputted number %d Is Not Palindrome ");
    }
    printf("\n\n Thanks !!!!!");
    getch ();
}
