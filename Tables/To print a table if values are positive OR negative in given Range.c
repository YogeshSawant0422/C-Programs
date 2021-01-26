// To print a table if values are in given reverse Range
#include<stdio.h>
#include<conio.h>

int main()
{
    int RN = 0 ,CN = 0, No1 = 0,No2 = 0;

    printf("\n Enter first number = ");
    scanf("%d",&No1);
    printf("\n Enter second number =");
    scanf("%d",&No2);

     for(RN = 1;RN <=10;RN++)
     {
      if(No1<No2)
      {
            for(CN = No1;CN <=No2;CN++)
            {
                printf("\t %3d",CN * RN);
            }
         printf("\n");

      }
      else
      {
          for(CN = No1 ; CN >=No2;CN--)
          {
              printf("\t%3d",CN * RN);
          }
          printf("\n");
      }
     }
    printf("\n\n Thanks !!!!");

    getch();
    return 0;
}
