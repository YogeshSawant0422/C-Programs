//Program to find  given number is palindrome or not using for loop
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0 , RevNo = 0 ,Dig = 0 ;

    printf("\n Enter a number to find it is  palindrome or not ==>> ");
    scanf("%d",&No);

    if( No < 0 )
    {
        printf("\n Invalid Number !!!!");
        return -1;
    }

    for( Temp = No;Temp > 0 ;Dig = Temp % 10,RevNo =(RevNo * 10)+Dig,Temp/=10);

    printf("\n The reverse of given inputted number %d  is = %d\n",No ,RevNo);
    if(No == RevNo)
    {
        printf("\n As %d = %d ",No ,RevNo);
        printf("\n\nHence,Given Inputted number is Palindrome .");
    }
    else
    {
        printf("\n As %d != %d ",No ,RevNo);
        printf("\n\n Hence ,Given Inputted number is Not Palindrome .");
    }
    printf("\n\n Thanks !!!!");
    getch();
    return 0 ;
}
