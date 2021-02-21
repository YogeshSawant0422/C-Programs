//Even Odd Using if...else
#include<stdio.h>
#include<conio.h>

int main()
{
   int num1=0;

   printf("\n Enter an integer number ==>>");
   scanf("%d",&num1);

   if(num1%2==0)
   {
       printf("\n Given number %d is even",num1);
   }
   else
   {
       printf("\n Given number %d is odd",num1);
   }

    printf("\n\n Thanks !!!");

    getch();
    return 0;

}
