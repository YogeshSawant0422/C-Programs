//Create Array  of 5 Elements With Null (0) Initialization & Accept All Elements Without Loop Display All Elements
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Arr[5] = {};

    printf("\n=== Accept All  Elements === \n");

    printf("\n\t Enter the 101 element = ");
    scanf("%d",&Arr[0]);
    printf("\n\t Enter the 102 element = ");
    scanf("%d",&Arr[1]);
    printf("\n\t Enter the 103 element = ");
    scanf("%d",&Arr[2]);
    printf("\n\t Enter the 104 element = ");
    scanf("%d",&Arr[3]);
    printf("\n\t Enter the 105 element = ");
    scanf("%d",&Arr[4]);

    getch();

    printf("\n Press any key to continue !!!!");
    getch();

    system("cls");

     printf("\n === Display All The Given Entered Numbers ===\n");

     printf("\n\t Print the 101 element = %d",Arr[0]);
     printf("\n\t Print the 102 element = %d",Arr[1]);
     printf("\n\t Print the 103 element = %d",Arr[2]);
     printf("\n\t Print the 104 element = %d",Arr[3]);
     printf("\n\t Print the 105 element = %d",Arr[4]);

     getch();
     return 0;
}
