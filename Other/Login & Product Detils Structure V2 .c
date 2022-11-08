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
        int i = 0 ;
        char U_name[20] = "Admin" , pass[4] = "1234" ;
        struct Product pro[3];

            printf("\n\n\t\t\t\t## Welcome Our App ##");

            up:

            printf("\n\n\t Enter Username =>");                              ///Accept username
            gets(U_name);

            printf("\n\n\t Enter Password =>");              ///  gets(pass);  Accept password
            for(i = 0; i < 4 ;i++)
            {
                pass[i] = getch();
                printf("*");
            }
            pass[i] = '\0';

            system("cls");

      if(!strcmp(U_name,"Admin")&& !strcmp(pass,"1234"))    ///login logic
      {

            printf("\n\n\n\t\t ### Login Sucessfuly ###  \n\n\n\t\t To Enter Deta Press Any key ");
            getch();

           /// Accept Product Detils
    for(i = 0 ; i < 3 ; i++)
    {
            printf("\n\n=====================================================\n");
            printf("\n Enter Product ID => %d \n", i + 1);                        ///scanf("%d",&pro[i].P_id);

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
            printf("\n\n\t To Display Product Detils Enter yes");

            system("cls");

    for(i = 0 ; i < 3; i++)
    {
            ///Display  Product Detils
            printf("\n\n=====================================================\n");
            printf("\n\n\t The product id is             %d", pro[i].P_id);
            printf("\n\n\t The product Name is           %s", pro[i].Name);
            printf("\n\n\t The product perches price is  %0.2f ",pro[i].P_price);
            printf("\n\n\t The product  price is         %0.2f",pro[i].S_price);
            printf("\n\n=====================================================\n");
    }
  }
  else
  {
        printf("\n\n\n\t Place Enter Valid Username & Password ");
        goto up;
  }
}


