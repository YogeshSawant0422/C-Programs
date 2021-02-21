// ASCII value is converted into its character
#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("\n Conversion of ASCII value into character \n");

    printf("Enter the ASCII value to get its Character ==>>");
    scanf("%d",&num);

    printf("\n The Character of ASCII Value %d is =%C",num,num);

    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
