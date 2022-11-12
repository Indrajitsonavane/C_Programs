/////////////////////////////////////////////////////////////////////////
///                    Dinemic Structure Using scanf                 ///
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Product
{
    int P_id;
    char Name[20];
    float P_price;
    float S_price;
};

int main()
{
            int i = 0 , cnt = 0 ;

            printf("\n Enter product quantity => ");
            scanf("%d",&cnt);

            struct Product pro[cnt];

     for(i = 0 ; i < cnt ; i++)
    {
            printf("\n\n=====================================================\n");
            printf("\n Enter Product ID => %d \n ", i + 1 );                        /// scanf("%d",&pro[i].P_id);


            fflush(stdin);

            printf("\n Enter Product Name => ");
            gets(pro[i].Name);

            printf("\n Enter Product Parches price => ");
            scanf("%f",&pro[i].P_price);

            printf("\n Enter Product Seals Price => ");
            scanf("%f",&pro[i].S_price);
            printf("\n\n=====================================================\n");

            system("cls");
    }


    for(i = 0 ; i < cnt; i++)
    {
            ///Display  Product Detils
            printf("\n\n=====================================================\n");
            printf("\n\n\t The product id is             %d",i + 1);
            printf("\n\n\t The product Name is           %s", pro[i].Name);
            printf("\n\n\t The product perches price is  %0.2f ",pro[i].P_price);
            printf("\n\n\t The product  price is         %0.2f",pro[i].S_price);
            printf("\n\n=====================================================\n");
    }
}



