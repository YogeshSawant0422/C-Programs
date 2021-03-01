//Structure Demonstration (String Copy)
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

int main()
{
    struct student std;

    std.RollNo = 550;
    strcpy(std.Name,"Yogesh Sawant");
    strcpy(std.City,"Vita");
    std.Per = 85.5687;

    printf("\n====Student Information====");
    printf("\n\tRoll No    = %3d. \n\tName       = %3s. \n\tCity       = %3s.\n\tPercentage = %3f.",std.RollNo,std.Name,std.City,std.Per);

    getch();
    return 0;
}
