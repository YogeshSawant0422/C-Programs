// Write program to find Minimum  and Maximum from 10 inputted numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Cnt = 0, Min = 0, Max = 0;

    printf("\n\t<<== Enter 10 inputted numbers for getting a Minimum and Maximum from it ==>>");

    for(Cnt = 1 ; Cnt <=10;Cnt++)
    {
      printf("\n\n\t Enter %d number = ",Cnt );
      scanf("%d",&No);

      if(Cnt == 1 )
      {
         Min = No;
         Max = No;
         continue;
      }
      if(No > Max )
      {
         Max = No;
      }
      if(No < Min )
      {
        Min = No;
      }
    }

    printf("\n Press any key to print Minimum And Maximum Number........ ");
    getch();

    printf("\n The Maximum number = %d",Max);
    printf("\n The Minimum number = %d",Min);

    printf("\n Thanks !!!!");

    getch();
    return 0 ;
}
