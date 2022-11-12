#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int Arr[5] = {};
        int i = 0 ,Sum = 0;

        printf("\n=============*******=============\n");

        for(i=0; i < 5; i++)
        {
            printf("\n Enter Bills %d => ",i+1);
            scanf("%d",&Arr[i]);
            Sum = Sum + Arr[i];
        }

        printf("\n=============*******=============\n");

        system("cls");

        printf("\n=============*******=============\n");
        for(i=0; i < 5; i++)
        {
           printf("\n You Entered Bills  = %d .",Arr[i]);
        }
        printf("\n=============*******=============\n");


        printf("\n Enter A Key To Show Total ");
        getch();
        system("cls");

        printf("\n=============*******=============");

        printf("\n\tTotal is => %d",Sum);

        printf("\n=============*******=============\n");

        printf("\n ******THANKS******\n");

        getch();
        return 0;
}
