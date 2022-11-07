/////////////////////////////////////////////////
///          Print Student  Information      ///
///////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int R_No = 0, Marks =  0;
    char Name[30] = {'\0'};
    float Per = 0 ;

    printf("\n=========================================\n");
    printf("\n\t Enter Roll No => ");
    scanf("%d",&R_No);

    fflush(stdin);

    printf("\n\t Enter Name => ");
    gets(Name);

    fflush(stdin);

    printf("\n\t Enter Marks => ");
    scanf("%d",&Marks);

    printf("\n\t Enter percent => ");
    scanf("%f",&Per);
    printf("\n=========================================\n");

    system("cls");

    printf("\n=========================================\n\n");
    printf("\n\n\t Roll No Is => %d",R_No);
    printf("\n\n\t Name Is    => %s",Name);
    printf("\n\n\t Marks Is   => %d",Marks);
    printf("\n\n\t percent   => %0.2f",Per);
    printf("\n\n=========================================\n");

    printf("\n\n\tThanks");

    getch();
    return 0;
}
