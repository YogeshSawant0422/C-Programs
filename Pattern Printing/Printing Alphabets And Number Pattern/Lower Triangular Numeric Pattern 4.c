//Lower triangular numeric pattern 4
//    1 2
//    1 2  3
//    1 2  3  4
//    1 2  3  4  5
//    1 2  3  4  5  6
//
/////////////////////////////////////
#include<stdio.h>

int main()
 {
     int i = 0 , j = 0 ,c = 0 ,No = 0,Temp = 0;
     //No = Temp ;
      printf("\n Enter a number for printing numeric pattern = ");
      scanf("%d",&c);

      //printf("\n Enter a number for printing its Table = ");
      //scanf("%d",&No);
       printf("\n");
      for( i = 1 ; i<= c ; i++)
      {
          for(j = 1 ; j<=c ; j++)
          {
              if(i >= j)
              {
                  //Temp = Temp + No;
                  printf(" %d ", j);
              }
          }
         printf("\n");
    }
        printf("\n\n Thanks !!!!");
        return 0;
 }
