// To print Table of given range of numbers
#include<conio.h>
#include<stdio.h>

int main()
{
    int CN = 0 , RN = 0;

    printf("\n The Table between numbers 5 to 12 is = \n\n");

    for(RN = 1 ; RN <=10;RN++)
    {
        for(CN = 5 ; CN <=12 ; CN++)
        {
            printf("\t %3d",CN * RN);
        }
        printf("\n");
    }

    printf("\n Thanks !!!!");

    getch();
    return 0;
}
