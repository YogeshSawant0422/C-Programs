//Information Of Student Details
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char Grade ='A';
    int R_no = 0;
    float Per =0.0;
    char Name[80] = "";

    printf("\n Enter Student Details =>>\n");

    printf("\n Enter Student Roll_Number = ");
    scanf("%d",&R_no);

    printf("\n Enter Student Name => ");
    scanf("%s",&Name);

    printf("\n Enter Student Percentage => ");
    scanf("%f",&Per);
                                                                          //or scanf(" %c",&Grade);  Or Grade = getche();
    printf("\n Enter Student Grade =>");
    putch(Grade);                                                        // in these programm Grade = getchar() is not Working
                                                                         // putch(Grade)
    getch();                                                              // it is Similar to clrscr() on Turbo c
    system("cls");

    printf("\t\tSudent Information");
    printf("\n\n\============================*******=====================================");

      printf("\n\tRoll Number         =%d\n\tStudent Name        =%s\n\tStudent Percentage  =%f\n\tStudent Grade       =%c",R_no,Name,Per,Grade);

    printf("\n\n============================*******=====================================");


    return 0;

}







