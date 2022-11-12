#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size Bill_cnt

int main()
{
    int Arr[5] = {};
    int i = 0 ,Bill_cnt = 0;

    printf("Enter Bill No => ");
    scanf("%d",&Bill_cnt);

    for(i=0; i < Size; i++)
    {
        printf("\nEnter flot value => ");
        scanf("%d",&Arr[i]);

    }

    system("cls");

    printf("\n Value of 1 Element = %d .",Arr[0]);
    printf("\n Value of 2 Element = %d .",Arr[1]);
    printf("\n Value of 3 Element = %d .",Arr[2]);
    printf("\n Value of 4 Element = %d .",Arr[3]);
    printf("\n Value of 5 Element = %d .",Arr[4]);

    getch();
    return 0;
}

