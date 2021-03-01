//Basics Of Structure Demonstration
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RollNo;
    char Name[80];
    char City[50];
    float Per ;
};

int main( )
{
    struct student std1 , std2 ,std3 = {20 ,"Sanket Mane","Satara",36.56546};

    std1.RollNo = 25;
    strcpy(std1.Name,"Karan Chinchankar");
    strcpy(std1.City,"Vita");
    std1.Per = 99.45878;

    printf("\n Enter Roll No = ");
    scanf("%d",&std2.RollNo);

    printf("\n Enter Name = ");
    scanf(" %[^\n]",&std2.Name);
    fflush(stdin);

    printf("\n Enter City = ");
    scanf(" %[^\n]",&std2.City);
    fflush(stdin);

    printf("\n Enter Percentage  = ");
    scanf("%f",&std2.Per);

    printf("\n\n ===The 1st Student Information ===\n\tRoll No = %d. \n\tName =%s. \n\tCity =%s. \n\tPercentage =%f.",std1.RollNo,std1.Name,std1.City,std1.Per);
    printf("\n\n ===The 2nd Student Information ===\n\tRollNo = %d.\n\tName = %s. \n\tCity = %s.\n\tPercentage =%f.",std2.RollNo,std2.Name,std2.City,std2.Per);
    printf("\n\n===The 3rd Student Information ===\n\tRollNo = %d.\n\tName = %s.\n\tCity = %s.\n\tPercentage =%f.",std3.RollNo,std3.Name,std3.City,std3.Per);

    getch();
    printf("\n\n Thanks !!!!");

    return 0;
}
