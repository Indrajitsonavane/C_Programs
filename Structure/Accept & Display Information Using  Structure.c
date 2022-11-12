/////////////////////////////////////////////////////////////////////////
///          Accept & Display Information Using  Structure           ///
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Product
{
    int p_id;
    char p_Name[20];
    float p_price , s_price;
};

int main()
{
    struct Product p_obj1 , p_obj2;

    p_obj2.p_id = 2;
    strcpy(p_obj2.p_Name,"Book");
    p_obj2.p_price = 20;
    p_obj2.s_price = 30;

    printf("\n Enter product id => ");
    scanf("%d",&p_obj1.p_id);

    printf("\n Enter Product Name => ");
    scanf(" %[^\n]",&p_obj1.p_Name);

    fflush(stdin);

    printf("\n Enter product perches price => ");
    scanf("%f",&p_obj1.p_price);

    printf("\n Enter product sells price => ");
    scanf("%f",&p_obj1.s_price);

    system("cls");

    printf("\n=================================================\n");
    printf("\n product Id Is =>              %d",p_obj1.p_id);
    printf("\n product Name Is =>            %s",p_obj1.p_Name);
    printf("\n product perches price Is =>   %f ",p_obj1.p_price);
    printf("\n product Id Is =>              %f ",p_obj1.s_price);
    printf("\n=================================================\n");


    printf("\n=================================================\n");
    printf("\n product Id Is =>              %d",p_obj2.p_id);
    printf("\n product Name Is =>            %s",p_obj2.p_Name);
    printf("\n product perches price Is =>   %f ",p_obj2.p_price);
    printf("\n product Id Is =>              %f ",p_obj2.s_price);
    printf("\n=================================================\n");

    getch();
    return 0 ;
}
