// Maximum From Two Numbers Using if...else
#include<stdio.h>
#include<conio.h>

int main()
                                                       // Here we use else if ladder
{                                                      // We also Use The goto function
    int No1=0, No2 =0;

    printf("\nGiven Two Numbers Are ===>>>\n");
    scanf("\n%d\n%d",&No1,&No2);
      //up :
    if(No1==No2)
    {
        printf("\nGiven TWO Numbers Are Equal\n Please Enter Diffrent Number To Compair");
        // goto up;
    }
    else if(No1>No2)  // Only if
    {
      printf("\nGiven %d Number is Maximum \n",No1);
    }
    else
    {
        printf("Given %d Number is  Maximum\n",No2);
    }
    printf("\n Thanks !!!");
    getch();
    return 0;
}
