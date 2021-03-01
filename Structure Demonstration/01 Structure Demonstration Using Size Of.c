//Structure Demonstration Using Size Of
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RollNo ;
    char Name[80];
    char City[20];
    float Per;

};

int main()
{
    int Num = 21;
    struct student std1;

    printf("\n Size Of Integer Is  => %d ",sizeof(Num));
    printf("\n\nSize Of Structure Student Object / Instance Is => %d ",sizeof(std1));

    getch();
    return 0;
}
