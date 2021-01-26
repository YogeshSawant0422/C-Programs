// print character A to Y in sequence order and reverse order in one program(Depends demand of user).
#include<stdio.h>
#include<conio.h>

int main()
{
    char Lch = '\0',Fch = '\0',Sch = '\0';

    printf("\n Enter the first character ==>>  ");
    Fch = getche();

    printf("\n Enter the second Character ==>> ");
    Sch = getche();

    if(Fch<Sch)
    {
         for(Lch = Fch;Lch<=Sch;Lch++)
           {
              printf("\n\t%C",Lch);
           }
    }
    else
    {
        for(Lch = Fch;Lch>=Sch;Lch--)
        {
            printf("\n\t%c",Lch);
        }
    }
        getch();
     printf("\n\n Thanks!!!");

     getch();
     return 0;
}
