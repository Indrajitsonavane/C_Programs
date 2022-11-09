///////////////////////////////////////////////
///        Max from Tow Using if else      ///
//////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0 ;


    printf("\n============*******=============\n");

    printf("\n Enter 1st Number =>");
    scanf("%d",&No1);

    printf("\n Enter 2nd Number =>");
    scanf("%d",&No2);

    printf("\n============*******=============\n");

    if(No1 > No2)
    {
        printf("\n %d Is Max ",No1);
    }
    else
    {
        printf("\n %d Is Max ",No2);
    }

    getch();
    return 0;
}
