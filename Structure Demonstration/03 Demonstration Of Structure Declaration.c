//Demonstration Of Structure Declaration
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RollNo;
    char Name[80];
    char City[50];
    float Per;
}s1 = {101,"John Sena","New York",99.5666};   //Global Variable Declaration.

int main()
{
    struct student std1 = {15 ,"Nick Jones","London",65.15455};

    printf("\n Local Student Object Details Given Are =>\n\n\tRollNo = %d. \n\tName = %s. \n\tCity = %s. \n\tPercentage = %f . \n",std1.RollNo,std1.Name,std1.City,std1.Per);

    strcpy(s1.Name,"Ronald");
    getch();

    printf("\n Global Student Object Details Are =>\n\n\tRollNo = %d. \n\tName = %s. \n\tCity = %s .\n\tPercentage = %f . \n",s1.RollNo,s1.Name,s1.City,s1.Per);
    getch();
    return 0;
}
