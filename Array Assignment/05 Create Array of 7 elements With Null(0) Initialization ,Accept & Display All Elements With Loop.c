//Create Array of 7 Elements With Null(0) Initialization ,Accept & Display All Elements with loop
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Arr[7] = {} , i = 0;

   printf("\n ==== Accept the elements ====\n");

   for( i = 0 ; i < 7 ;i++)
   {
       printf("\n\t Enter the %d element =  ",i +101);
       scanf("%d",&Arr[i]);
   }

    printf("\n Press any key to continue!!!!");

    getch();

    system("cls");

    printf("\n==== Display All The Elements ===\n");

    for(i = 0 ; i < 7 ;i++)
    {
        printf("\n\t Enter The %d element = %d ", i +101 ,Arr[i]);
    }
    getch();
    return 0;
}
