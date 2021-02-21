#include<stdio.h>


 int main()
 {
     int i = 0 , j = 0, c = 0  ,No1 = 1 ,No2 = 0 ,No3 = 0;

     printf("\n Enter a number for printing  Column = ");
     scanf("%d",&c);

    // printf("\n Enter a number for its fibonacci = ");
    //scanf("%d",&No);

     for( i = 1 ; i <= c ; i++ )
     {
         for( j = 1 ; j <=c ; j++)
        {
            if(  i >= j )
             {
                printf("\t%d",No3);
                   No3 = No1+No2;
                   No1=No2;
                   No2=No3;
             }
        }
  printf("\n");
}

     return 0;
 }
